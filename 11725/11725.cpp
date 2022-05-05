/*
Title   : BOJ_11725 [트리의 부모 찾기]
Author  : Hoseok Lee
Date    : 2022/05/05
https://www.acmicpc.net/problem/11725
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<int> graph[100001], int start, int parent[100001]) {
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        
        for (int i = 0; i < graph[now].size(); i++) {
            if (parent[graph[now][i]] == 0) {
                parent[graph[now][i]] = now;
                q.push(graph[now][i]);
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int parent[100001] = {0, 1, };
    vector<int> graph[100001];
    
    
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    bfs(graph, 1, parent);
    
    for (int i = 2; i <= n; i++)
        cout << parent[i] << '\n';
    return 0;
}
