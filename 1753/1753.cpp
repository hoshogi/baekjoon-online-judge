/*
Title   : BOJ_1753 [최단경로]
Author  : Hoseok Lee
Date    : 2023/03/20
https://www.acmicpc.net/problem/1753
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[20001];
int len[20001];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    len[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        int dist = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        
        if (dist > len[now])
            continue;
        
        for (int i = 0; i < graph[now].size(); i++) {
            int cost = dist + graph[now][i].second;
            
            if (cost < len[graph[now][i].first]) {
                len[graph[now][i].first] = cost;
                pq.push({cost, graph[now][i].first});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int v, e, start;
    pair<int, int> prev = {0, 0};
    vector<pair<pair<int, int>, int>> edge;
    
    cin >> v >> e >> start;
    for (int i = 0; i < e; i++) {
        int from, to, w;
        
        cin >> from >> to >> w;
        edge.push_back({{from, to}, w});
    }
    fill_n(len, v + 1, INF);
    sort(edge.begin(), edge.end());
    for (auto it : edge) {
        if (it.first == prev)
            continue;
        graph[it.first.first].push_back({it.first.second, it.second});
        prev = it.first;
    }
    
    dijkstra(start);
    
    for (int i = 1; i <= v; i++) {
        if (len[i] == INF)
            cout << "INF" << '\n';
        else
            cout << len[i] << '\n';
    }
    return 0;
}
