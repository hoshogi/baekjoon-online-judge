/*
Title   : BOJ_1715 [카드 정렬하기]
Author  : Hoseok Lee
Date    : 2022/03/08
https://www.acmicpc.net/problem/1715
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <functional>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long result = 0;
    priority_queue<long long, vector<long long>, greater<long long> > pq;
    vector<long long> v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        long long num;

        cin >> num;
        pq.push(num);
    }

    while (pq.size() != 1) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        pq.push(x + y);
        v.push_back(x + y);
    }

    for (auto it : v) 
        result += it;

    cout << result << '\n';
    return 0;
}