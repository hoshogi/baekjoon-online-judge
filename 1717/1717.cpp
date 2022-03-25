/*
Title   : BOJ_1717 [집합의 표현]
Author  : Hoseok Lee
Date    : 2022/03/26
https://www.acmicpc.net/problem/1717
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int Find(int parent[], int x) {
    if (x != parent[x])
        parent[x] = Find(parent, parent[x]);
    return parent[x];
}

void Union(int parent[], int a, int b) {
    a = Find(parent, a);
    b = Find(parent, b);
    
    if (a < b)
        parent[b] = a;
    else
        parent[a] = b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int parent[1000001] = {0, };
    
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
        parent[i] = i;
    
    for (int i = 0; i < m; i++) {
        int menu, a, b;
        
        cin >> menu >> a >> b;
        if (menu == 0) {
            Union(parent, a, b);
        }
        else if (menu == 1) {
            if (Find(parent, a) == Find(parent, b))
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}
