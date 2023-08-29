/*
Title   : BOJ_11060 [점프 점프]
Author  : Hoseok Lee
Date    : 2023/08/29
https://www.acmicpc.net/problem/11060
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 1000
using namespace std;

int n;
int num[MAX];
int minCount[MAX];

void bfs() {
    queue<pair<int, int>> q;
    minCount[0] = 0;
    q.push({0, minCount[0]});

    while (!q.empty()) {
        int now = q.front().first;
        int count = q.front().second + 1;
        q.pop();

        for (int i = now + 1; i <= min(now + num[now], n - 1); i++) {
            if (count < minCount[i]) {
                minCount[i] = count;
                q.push({i, minCount[i]});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    fill_n(minCount, n, MAX);
    for (int i = 0; i < n; i++)
        cin >> num[i];
    bfs();
    if (minCount[n - 1] == MAX)
        cout << -1 << '\n';
    else 
        cout << minCount[n - 1] << '\n';
    return 0;
}