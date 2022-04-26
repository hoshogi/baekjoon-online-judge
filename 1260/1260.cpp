/*
Title   : BOJ_1260 [DFS와 BFS]
Author  : Hoseok Lee
Date    : 2022/04/26
https://www.acmicpc.net/problem/1260
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void dfs(vector<int> graph[1001], int vertex, bool visited[1001]) {
    visited[vertex] = true;
    cout << vertex << ' ';
    for (int i = 0; i < graph[vertex].size(); i++) {
        if (!visited[graph[vertex][i]])
            dfs(graph, graph[vertex][i], visited);
    }
}


void bfs(vector<int> graph[1001], int start, bool visited[1001]) {
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty()) {
        int vertex = q.front();
        q.pop();
        cout << vertex << ' ';
        for (int i = 0; i < graph[vertex].size(); i++) {
            if (!visited[graph[vertex][i]]) {
                visited[graph[vertex][i]] = true;
                q.push(graph[vertex][i]);
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m, start;
    bool edge[1001][1001] = {false, };
    bool visited[1001] = {false, };
    vector<int> graph[1001];
    
    cin >> n >> m >> start;
    for (int i = 0; i < m; i++) {
        int a, b;
        
        cin >> a >> b;
        if (!edge[a][b] && !edge[b][a]) {
            edge[a][b] = true;
            edge[b][a] = true;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
    }
    
    for (int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());
    
    dfs(graph, start, visited);
    cout << '\n';
    fill_n(visited, n + 1, false);
    bfs(graph, start, visited);
    return 0;
}
