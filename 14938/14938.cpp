/*
Title   : BOJ_14938 [서강그라운드]
Author  : Hoseok Lee
Date    : 2023/03/23
https://www.acmicpc.net/problem/14938
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[101];
int len[101];

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
        for (auto it : graph[now]) {
            int dist = cost + it.second;
            
            if (dist < len[it.first]) {
                len[it.first] = dist;
                pq.push({dist, it.first});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int vertex, limit, edge, answer = 0;
    int item[101];
    
    cin >> vertex >> limit >> edge;
    for (int i = 1; i <= vertex; i++)
        cin >> item[i];
    for (int i = 0; i < edge; i++) {
        int v1, v2, weight;
        
        cin >> v1 >> v2 >> weight;
        graph[v1].push_back({v2, weight});
        graph[v2].push_back({v1, weight});
    }
    for (int i = 1; i <= vertex; i++) {
        int result = 0;
        fill_n(len, vertex + 1, INF);
        dijkstra(i);
        for (int j = 1; j <= vertex; j++) {
            if (len[j] <= limit)
                result += item[j];
        }
        answer = max(answer, result);
    }
    cout << answer << '\n';
    return 0;
}
