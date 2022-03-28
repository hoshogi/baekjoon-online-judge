/*
Title   : BOJ_1766 [문제집]
Author  : Hoseok Lee
Date    : 2022/03/28
https://www.acmicpc.net/problem/1766
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

/*
위상 정렬
Topology Sort
*/
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int indegree[32001] = {0, };
    vector<int> graph[32001];
    vector<int> result;
    priority_queue<int, vector<int>, greater<int> > pq;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        
        cin >> a >> b;
        graph[a].push_back(b);
        indegree[b]++;
    }
    
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0)
            pq.push(i);
    }
    
    while (!pq.empty()) {
        int now = pq.top();
        pq.pop();
        result.push_back(now);
        
        for (auto it : graph[now]) {
            indegree[it]--;
            if (indegree[it] == 0)
                pq.push(it);
        }
    }
    
    for (auto it : result)
        cout << it << ' ';
    return 0;
}
