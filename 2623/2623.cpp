/*
Title   : BOJ_2623 [음악프로그램]
Author  : Hoseok Lee
Date    : 2022/03/28
https://www.acmicpc.net/problem/2623
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
    
    int n, m, count = 0;
    int indegree[1001] = {0, };
    vector<int> graph[1001];
    vector<int> result;
    queue<int> q;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int num, temp;
        
        cin >> num >> temp;
        for (int j = 1; j < num; j++) {
            int singer;
            
            cin >> singer;
            graph[temp].push_back(singer);
            indegree[singer]++;
            temp = singer;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }
    
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        result.push_back(now);
        count++;
        for (auto it : graph[now]) {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }
    
    if (count == n) {
        for (auto it : result)
            cout << it << '\n';
    }
    else {
        cout << 0 << '\n';
    }
    return 0;
}
