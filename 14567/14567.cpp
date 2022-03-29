/*
Title   : BOJ_14567 [선수과목 (Prerequisite)]
Author  : Hoseok Lee
Date    : 2022/03/28
https://www.acmicpc.net/problem/14567
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, count = 0, semester = 0;
    int indegree[1001] = {0, };
    int result[1001] = {0, };
    vector<int> graph[1001];
    queue<int> q, temp;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        
        cin >> a >> b;
        graph[a].push_back(b);
        indegree[b]++;
    }
    
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }
    
    while (true) {
        semester++;
        while (!q.empty()) {
            int now = q.front();
            q.pop();
            count++;
            result[now] = semester;
            for (auto it : graph[now]) {
                indegree[it]--;
                if (indegree[it] == 0)
                    temp.push(it);
            }
        }
        if (count == n)
            break;
        while (!temp.empty()) {
            q.push(temp.front());
            temp.pop();
        }
    }
    
    for (int i = 1; i <= n; i++)
        cout << result[i] << ' ';
    return 0;
}
