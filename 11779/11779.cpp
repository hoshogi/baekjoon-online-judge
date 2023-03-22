/*
Title   : BOJ_11779 [최소비용 구하기 2]
Author  : Hoseok Lee
Date    : 2023/03/22
https://www.acmicpc.net/problem/11779
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define INF 1e9
using namespace std;

int len[1001];
vector<pair<int, int>> graph[1001];
vector<int> trace[1001];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    len[start] = 0;
    trace[start].push_back(start);
    pq.push({0, start});
    
    while (!pq.empty()) {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        
        if (cost > len[now])
            continue;
        for (auto it : graph[now]) {
            int dist = cost + it.second;
            
            if (dist < len[it.first]) {
                len[it.first] = dist;
                pq.push({dist, it.first});
                trace[it.first].clear();
                for (int i = 0; i < trace[now].size(); i++)
                    trace[it.first].push_back(trace[now][i]);
                trace[it.first].push_back(it.first);
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
    for (int i = 0; i < edge; i++) {
        int from, to, weight;
        
        cin >> from >> to >> weight;
        graph[from].push_back({to, weight});
    }
    fill_n(len, vertex + 1, INF);
    cin >> start >> end;
    dijkstra(start);
    cout << len[end] << '\n';
    cout << trace[end].size() << '\n';
    for (auto it : trace[end])
        cout << it << ' ';
    return 0;
}
