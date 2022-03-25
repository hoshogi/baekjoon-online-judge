/*
Title   : BOJ_20040 [사이클 게임]
Author  : Hoseok Lee
Date    : 2022/03/25
https://www.acmicpc.net/problem/20040
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int find_parent(int parent[500001], int x) {
    if (parent[x] != x)
        return find_parent(parent, parent[x]);
    return parent[x];
}

void union_parent(int parent[500001], int a, int b) {
    if (a < b)
        parent[b] = a;
    else
        parent[a] = b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int parent[500001] = {0, };
    
    cin >> n >> m;
    for (int i = 1; i < n; i++)
        parent[i] = i;
    
    for (int i = 1; i <= m; i++) {
        int a, b;
        
        cin >> a >> b;
        a = find_parent(parent, a);
        b = find_parent(parent, b);
        
        if (a == b) {
            cout << i << '\n';
            exit(0);
        }
        union_parent(parent, a, b);
    }
    cout << 0 << '\n';
    return 0;
}
