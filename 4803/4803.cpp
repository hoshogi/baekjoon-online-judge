/*
Title   : BOJ_4803 [트리]
Author  : Hoseok Lee
Date    : 2022/03/27
https://www.acmicpc.net/problem/4803
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int Find(int parent[], int x) {
    if (parent[x] != x)
        parent[x] = Find(parent, parent[x]);
    return parent[x];
}

void Union(int parent[], bool root[], int a, int b) {
    a = Find(parent, a);
    b = Find(parent, b);
    
    
    if (a < b) {
        if (root[a] == true && root[b] == true) {
            parent[b] = a;
            root[b] = false;
        }
        else {
            root[a] = root[b] = false;
        }
    }
    else if (a == b) {
        root[a] = false;
    }
    else {
        if (root[a] == true && root[b] == true) {
            parent[a] = b;
            root[a] = false;
        }
        else {
            root[a] = root[b] = false;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int count = 0;
    
    while (true) {
        int parent[501] = {0, };
        int n, m, result = 0;
        bool root[501] = {false, };
        
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        fill_n(root, n + 1, true);
        count++;
        for (int i = 1; i <= n; i++)
            parent[i] = i;
        for (int i = 0; i < m; i++) {
            int a, b;
            
            cin >> a >> b;
            Union(parent, root, a, b);
        }
        for (int i = 1; i <= n; i++) {
            if (root[parent[i]] == true) {
                result++;
                root[parent[i]] = false;
            }
        }
        cout << "Case " << count << ": ";
        if (result == 0)
            cout << "No trees." << '\n';
        else if (result == 1)
            cout << "There is one tree." << '\n';
        else
            cout << "A forest of " << result << " trees." << '\n';
    }
    return 0;
}
