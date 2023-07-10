/*
Title   : BOJ_25418 [정수 a를 k로 만들기]
Author  : Hoseok Lee
Date    : 2023/07/10
https://www.acmicpc.net/problem/25418
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
#define INF 1e9
using namespace std;

int a, k;
int result[1000001];

void bfs() {
    queue<pair<int, int>> q;

    q.push({a, 0});
    while(!q.empty()) {
        int now = q.front().first;
        int count = q.front().second;
        q.pop();

        if (count < result[now])
            result[now] = count;
        else
            continue;

        if (now == k) {
            result[now] = min(result[now], count);
            break;
        }

        if (now * 2 <= k)
            q.push({now * 2, result[now] + 1});
        q.push({now + 1, result[now] + 1});
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> k;
    fill_n(result, k + 1, INF);
    bfs();
    cout << result[k] << '\n';
    return 0;
}
