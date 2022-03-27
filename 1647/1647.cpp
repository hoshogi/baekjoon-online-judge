/*
Title   : BOJ_1647 [도시 분할 계획]
Author  : Hoseok Lee
Date    : 2022/03/27
https://www.acmicpc.net/problem/1647
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
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
    
    int n, m, result = 0, count = 0;
    int parent[100001] = {0, };
    vector<tuple<int, int, int> > v;
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    
    for (int i = 0; i < m; i++) {
        int a, b, c;
        
        cin >> a >> b >> c;
        v.push_back({c, a, b});
    }
    sort(v.begin(), v.end());
    
    for (auto it : v) {
        if (count == n - 2)
            break;
        
        if (Find(parent, get<1>(it)) != Find(parent, get<2>(it))) {
            Union(parent, get<1>(it), get<2>(it));
            result += get<0>(it);
            count++;
        }
    }
    cout << result << '\n';
    return 0;
}
