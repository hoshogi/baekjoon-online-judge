/*
Title   : BOJ_1005 [ACM Craft]
Author  : Hoseok Lee
Date    : 2023/09/09
https://www.acmicpc.net/problem/1005
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;

    cin >> t;
    while (t--) {
        int n, k, w;
        int indegree[1001] = {0, };
        int cost[1001] = {0, };
        int result[1001] = {0, };
        vector<int> graph[1001];
        queue<int> q;

        cin >> n >> k;
        for (int i = 1; i <= n; i++) 
            cin >> cost[i];
        for (int i = 0; i < k; i++) {
            int x, y;

            cin >> x >> y;
            graph[x].push_back(y);
            indegree[y]++;
        }
        cin >> w;

        for (int i = 1; i <= n; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

        while (!q.empty()) {
            int now = q.front();
            q.pop();

            result[now] += cost[now];
            for (auto it : graph[now]) {
                indegree[it]--;
                result[it] = max(result[it], result[now]);
                if (indegree[it] == 0)
                    q.push(it);
            }
        }
        cout << result[w] << '\n';
    }
    return 0;
}