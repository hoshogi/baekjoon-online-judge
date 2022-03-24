/*
Title   : BOJ_2012 [등수 매기기]
Author  : Hoseok Lee
Date    : 2022/03/24
https://www.acmicpc.net/problem/2012
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long result = 0;
    vector<int> v;

    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int count = 0;
    for (auto it : v) {
        count++;
        if (it != count)
            result += abs(it - count);
    }
    cout << result << '\n';
    return 0;
}
