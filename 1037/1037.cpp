/*
Title   : BOJ_1037 [약수]
Author  : Hoseok Lee
Date    : 2022/08/01
https://www.acmicpc.net/problem/1037
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    vector<long long> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    if (n % 2 == 0)
        cout << v[n / 2] * v[n / 2 - 1] << '\n';
    else
        cout << v[n / 2] * v[n / 2] << '\n';
    return 0;
}
