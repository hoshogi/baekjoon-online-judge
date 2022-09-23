/*
Title   : BOJ_18352 [특정 거리의 도시 찾기]
Author  : Hoseok Lee
Date    : 2022/09/23
https://www.acmicpc.net/problem/18352
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 1e9
#define MAX 300001
using namespace std;

vector<int> result;
vector<int> graph[MAX + 1];

void bfs(int k, int x) {
    bool visited[MAX + 1] = {false, };
    queue<pair<int, int> > q;
    q.push({x, 0});
    visited[x] = true;
    
    while (!q.empty()) {
        int vertex = q.front().first;
        int count = q.front().second + 1;
        q.pop();
        
        for (int i = 0; i < graph[vertex].size(); i++) {
            int temp = graph[vertex][i];
            
            if (!visited[temp]) {
                if (count == k)
                    result.push_back(temp);
                q.push({temp, count});
                visited[temp] = true;
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m, k, x;
    
    cin >> n >> m >> k >> x;
    for (int i = 0; i < m; i++) {
        int a, b;
        
        cin >> a >> b;
        graph[a].push_back(b);
    }
    
    bfs(k, x);
    
    if (result.size() == 0)
        cout << -1;
    else {
        sort(result.begin(), result.end());
        for (auto it : result)
            cout << it << '\n';
    }
}
