/*
Title   : BOJ_2606 [바이러스]
Author  : Hoseok Lee
Date    : 2022/05/03
https://www.acmicpc.net/problem/2606
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int bfs(vector<int> graph[101], int start, bool visited[101]) {
    int count = 0;
    
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        for (int i = 0; i < graph[now].size(); i++) {
            if (!visited[graph[now][i]]) {
                visited[graph[now][i]] = true;
                q.push(graph[now][i]);
                count++;
            }
        }
    }
    return count++;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int vertex, edge, result;
    vector<int> graph[101];
    bool visited[101] = {false, };
    
    cin >> vertex >> edge;
    for (int i = 0; i < edge; i++) {
        int a, b;
        
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    result = bfs(graph, 1, visited);
    cout << result << '\n';
    return 0;
}
