/*
Title   : BOJ_6497 [전력난]
Author  : Hoseok Lee
Date    : 2023/09/10
https://www.acmicpc.net/problem/6497
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int parent[200001];

int Find(int x) {
    if (parent[x] != x)
        parent[x] = Find(parent[x]);
    return parent[x];
}

void Union(int a, int b) {
    a = Find(a);
    b = Find(b);

    if (a < b)
        parent[b] = a;
    else 
        parent[a] = b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        int n, m, result = 0, sum = 0;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        cin >> m >> n;
        if (n == 0 && m == 0)
            break;
        for (int i = 1; i <= m; i++)
            parent[i] = i;
        for (int i = 0; i < n; i++) {
            int x, y, z;

            cin >> x >> y >> z;
            pq.push({z, {x, y}});
            sum += z;
        }
        while(!pq.empty()) {
            int cost = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();

            if (Find(x) != Find(y)) {
                Union(x, y);
                result += cost;
            }
        }
        cout << sum - result << '\n';
    }
    return 0;
}