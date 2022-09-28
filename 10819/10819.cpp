/*
Title   : BOJ_10819 [차이를 최대로]
Author  : Hoseok Lee
Date    : 2022/09/28
https://www.acmicpc.net/problem/10819
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int calculate(vector<int> v) {
    int result = 0;
    
    for (int i = 1; i < v.size(); i++)
        result += abs(v[i - 1] - v[i]);
    return result;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0;
    vector<int> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    do {
        result = max(result, calculate(v));
    } while(next_permutation(v.begin(), v.end()));
    
    cout << result << '\n';
    return 0;
}
