/*
Title   : BOJ_2644 [촌수계산]
Author  : Hoseok Lee
Date    : 2022/09/23
https://www.acmicpc.net/problem/2644
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n;
vector<int> graph[101];

int bfs(int start, int end) {
    queue<pair<int, int>> q;
    bool visited[101] = {false, };
    q.push({start, 0});
    visited[start] = true;
    
    while (!q.empty()) {
        int now = q.front().first;
        int count = q.front().second + 1;
        q.pop();
        
        for (int i = 0; i < graph[now].size(); i++) {
            int temp = graph[now][i];
            
            if (!visited[temp]) {
                if (temp == end)
                    return count;
                q.push({temp, count});
                visited[temp] = true;
            }
        }
    }
    return -1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int m, start, end;
    
    cin >> n >> start >> end >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    cout << bfs(start, end) << '\n';
    return 0;
}
