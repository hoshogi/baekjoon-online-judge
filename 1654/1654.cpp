/*
Title   : BOJ_1654 [랜선 자르기]
Author  : Hoseok Lee
Date    : 2022/09/07
https://www.acmicpc.net/problem/1654
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long k, n, answer = 0, max_num = 0;
    vector<long long> v;
    
    cin >> k >> n;
    for (int i = 0; i < k; i++) {
        long long num;
        
        cin >> num;
        v.push_back(num);
        max_num = max(max_num, num);
    }
    
    long long left = 1;
    long long right = max_num;
    
    while (left <= right) {
        long long result = 0;
        long long mid = (left + right) / 2;
        
        for (int i = 0; i < v.size(); i++)
            result += v[i] / mid;
        
        if (result >= n) {
            answer = max(answer, mid);
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    
    cout << answer << '\n';
    return 0;
}
