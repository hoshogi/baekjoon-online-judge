/*
Title   : BOJ_1197 [최소 스패닝 트리]
Author  : Hoseok Lee
Date    : 2022/03/27
https://www.acmicpc.net/problem/1197
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

/*
Kruskal Algorithm
*/
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v, e, result = 0;
    int parent[10001] = {0, };
    vector<tuple<int, int, int> > graph;
    
    cin >> v >> e;
    for (int i = 1; i <= v; i++)
        parent[i] = i;
    
    for (int i = 0; i < e; i++) {
        int a, b, c;
        
        cin >> a >> b >> c;
        graph.push_back({c, a, b});
    }
    sort(graph.begin(), graph.end());
    
    for (auto it : graph) {
        if (Find(parent, get<1>(it)) != Find(parent, get<2>(it))) {
            Union(parent, get<1>(it), get<2>(it));
            result += get<0>(it);
        }
    }
    cout << result << '\n';
    return 0;
}
