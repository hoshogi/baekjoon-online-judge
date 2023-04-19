
/*
Title   : BOJ_1325 [효율적인 해킹]
Author  : Hoseok Lee
Date    : 2023/04/19
https://www.acmicpc.net/problem/1325
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int maxValue;
vector<int> answer;
vector<int> graph[10001];

int bfs(int start) {
    int count = 1;
    bool visited[10001] = {false, };
    queue<int> q;
    
    visited[start] = true;
    q.push(start);
    
    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        
        for (auto it : graph[vertex]) {
            if (!visited[it]) {
                count++;
                visited[it] = true;
                q.push(it);
            }
        }
    }
    return count;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int start, end;
        
        cin >> end >> start;
        graph[start].push_back(end);
    }
    
    for (int i = 1; i <= n; i++) {
        int result = bfs(i);
        
        if (result == maxValue) {
            answer.push_back(i);
        } else if (result > maxValue) {
            maxValue = result;
            answer.clear();
            answer.push_back(i);
        }
    }
    
    sort(answer.begin(), answer.end());
    for (auto it : answer) {
        cout << it << ' ';
    }
    return 0;
}
