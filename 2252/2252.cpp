/*
Title   : BOJ_2252 [줄 세우기]
Author  : Hoseok Lee
Date    : 2022/03/25
https://www.acmicpc.net/problem/2252
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/*
위상 정렬
*/
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int indegree[32001] = {0, };
    vector<int> graph[32001];

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        
        cin >> a >> b;
        indegree[b]++;
        graph[a].push_back(b);
    }
    
    queue<int> q;
    vector<int> v;
    
    for (int i = 1; i <= n; i++)
        if (indegree[i] == 0)
            q.push(i);
    
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        v.push_back(now);
        for (auto it : graph[now]) {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }
    
    for (auto it : v)
        cout << it << ' ';
    return 0;
}
