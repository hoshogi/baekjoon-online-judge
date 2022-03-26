/*
Title   : BOJ_1976 [여행 가자]
Author  : Hoseok Lee
Date    : 2022/03/27
https://www.acmicpc.net/problem/1976
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int Find(int parent[], int x) {
    if (parent[x] != x)
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
    int parent[201] = {0, };
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int menu;
            
            cin >> menu;
            if (menu == 1)
                Union(parent, i, j);
        }
    }
    
    int temp;
    
    cin >> temp;
    for (int i = 1; i < m; i++) {
        int city;
        
        cin >> city;
        if (Find(parent, city) != Find(parent, temp)) {
            cout << "NO" << '\n';
            break;
        }
        if (i == m - 1)
            cout << "YES" << '\n';
        temp = city;
    }
    return 0;
}
