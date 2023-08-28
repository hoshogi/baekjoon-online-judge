/*
Title   : BOJ_12761 [돌다리]
Author  : Hoseok Lee
Date    : 2023/08/28
https://www.acmicpc.net/problem/12761
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 100000
using namespace std;

int a, b, n, m;
int minCount[MAX + 1];

void enqueue(queue<pair<int, int>>& q, int num, int count) {
    if (num < 0 || num > MAX)
       return;
    if (count < minCount[num]) {
        minCount[num] = count;
        q.push({num, minCount[num]});
    }
}

void bfs() {
    int plus[6] = {-1, 1, -a, a, -b, b};
    int mul[2] = {a, b};
    queue<pair<int, int >> q;
    minCount[n] = 0;
    q.push({n, minCount[n]});

    while (!q.empty()) {
        int now = q.front().first;
        int count = q.front().second + 1;
        q.pop();

        for (int i = 0; i < 6; i++) {
            int temp = now + plus[i];
            enqueue(q, temp, count);
        }

        for (int i = 0; i < 2; i++) {
            int temp = now * mul[i];
            enqueue(q, temp, count);
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill_n(minCount, MAX + 1, MAX);
    cin >> a >> b >> n >> m;
    bfs();
    cout << minCount[m] << '\n';
    return 0;
}