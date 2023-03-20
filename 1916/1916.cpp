/*
Title   : BOJ_1916 [최소비용 구하기]
Author  : Hoseok Lee
Date    : 2023/03/20
https://www.acmicpc.net/problem/1916
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[1001];
int len[1001];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    len[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        
        if (cost > len[now])
            continue;
        
        for (int i = 0; i < graph[now].size(); i++) {
            int dist = cost + graph[now][i].second;
            
            if (dist < len[graph[now][i].first]) {
                len[graph[now][i].first] = dist;
                pq.push({dist, graph[now][i].first});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int vertex, edge, start, end;
    
    cin >> vertex >> edge;
    fill_n(len, vertex + 1, INF);
    for (int i = 0; i < edge; i++) {
        int from, to, weight;
        
        cin >> from >> to >> weight;
        graph[from].push_back({to, weight});
    }
    cin >> start >> end;
    dijkstra(start);
    cout << len[end] << '\n';
    return 0;
}
