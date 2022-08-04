/*
Title   : BOJ_4948 [베르트랑 공준]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/4948
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    bool check[246913] = {true, true, false, };
    vector<int> v;
    
    for (int i = 2; i <= 246913; i++) {
        if (!check[i]) {
            v.push_back(i);
            for (int j = 2 * i; j <= 246913; j += i)
                check[j] = true;
        }
    }
    
    sort(v.begin(), v.end());
    while (true) {
        int n, result;
        
        cin >> n;
        if (n == 0)
            break;
        result = upper_bound(v.begin(), v.end(), 2 * n) - upper_bound(v.begin(), v.end(), n);
        cout << result << '\n';
    }
    return 0;
}
