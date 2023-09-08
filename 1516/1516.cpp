/*
Title   : BOJ_1516 [게임 개발]
Author  : Hoseok Lee
Date    : 2023/09/09
https://www.acmicpc.net/problem/1516
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int cost[501] = {0, };
    int result[501] = {0, };
    int indegree[501] = {0, };
    vector<int> graph[501];
    queue<int> q;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;

        cin >> cost[i];
        while (true) {
            cin >> num;

            if (num == -1)
                break;
            indegree[i]++;
            graph[num].push_back(i);
        }
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

    for (int i = 1; i <= n; i++)
        cout << result[i] << '\n';
    return 0;
}