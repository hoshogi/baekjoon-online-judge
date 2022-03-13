/*
Title   : BOJ_2108 [통계학]
Author  : Hoseok Lee
Date    : 2022/03/13
https://www.acmicpc.net/problem/2108
https://github.com/hoshogi
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct compare {
    bool operator() (pair<int, int> prev, pair<int, int> next) {
        if (prev.first == next.first)
            return prev.second > next.second;
        return prev.first < next.first;
    }
};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, sum = 0;
    int count[8001] = {0, };
    vector<int> v;
    priority_queue<pair<int, int>, vector<pair<int, int> >, compare> pq;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
        count[num + 4000]++;
        sum += num;
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < 8001; i++) {
        if (count[i] != 0) {
            pq.push({count[i], i - 4000});
        }
    }
    
    int average = round((double)sum / n);
    if (average == -0)
        average = 0;
    
    int temp = pq.top().first;
    int mode = pq.top().second;
    pq.pop();
    if (!pq.empty() && pq.top().first == temp)
        mode = pq.top().second;
    
    cout << average << '\n';
    cout << v[n / 2] << '\n';
    cout << mode << '\n';
    cout << v[n - 1] - v[0] << '\n';
}
