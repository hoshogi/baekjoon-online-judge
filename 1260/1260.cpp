/*
Title   : BOJ_1260 [DFS와 BFS]
Author  : Hoseok Lee
Date    : 2022/02/05
https://www.acmicpc.net/problem/1260
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void dfs(bool edge[1001][1001], int v, bool visited[1001], int n) {
    visited[v] = true;
    cout << v << ' ';
    for (int i = 1; i <= n ; i++) {
        if (edge[v][i] == true && visited[i] == false)
            dfs(edge, i, visited, n);
    }
}

void bfs(bool edge[1001][1001], int v, bool visited[1001], int n) {
    queue<int> q;
    
    q.push(v);
    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        visited[vertex] = true;
        cout << vertex << ' ';
        for (int i = 1; i <= n; i++) {
            if (edge[vertex][i] == true && visited[i] == false) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool edge[1001][1001] = {false, };
    bool visited[1001] = {false, };
    
    int n, m, v;
    cin >> n >> m >> v;
    
    for (int i = 0; i < m; i++) {
        int a, b;
        
        cin >> a >> b;
        edge[a][b] = true;
        edge[b][a] = true;
    }
    dfs(edge, v, visited, n);
    cout << '\n';
    fill_n(visited, 1001, false);
    bfs(edge, v, visited, n);
    return 0;
}
