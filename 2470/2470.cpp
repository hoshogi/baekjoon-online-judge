/*
Title   : BOJ_2470 [두 용액]
Author  : Hoseok Lee
Date    : 2023/03/30
https://www.acmicpc.net/problem/2470
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define INF 2e9
using namespace std;

int n, result = INF;
pair<int, int> answer;
vector<int> v;

void sum(int num, int index) {
    if (index >= 0 && index < n && num != v[index] && abs(num + v[index]) < result) {
        result = abs(num + v[index]);
        answer = {num, v[index]};
    }
}

void calculate(int num) {
    int index = lower_bound(v.begin(), v.end(), -num) - v.begin();
    sum(num, index - 1);
    sum(num, index);
    sum(num, index + 1);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (auto it : v)
        calculate(it);
    cout << min(answer.first, answer.second) << ' ' << max(answer.first, answer.second) << '\n';
    return 0;
}
