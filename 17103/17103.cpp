/*
Title   : BOJ_17103 [골드바흐 파티션]
Author  : Hoseok Lee
Date    : 2022/07/07
https://www.acmicpc.net/problem/17103
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define N 1000000
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    bool check[N + 1] = {true, true, false, };
    vector<int> v;
    
    for (int i = 1; i <= N; i++) {
        if (!check[i]) {
            v.push_back(i);
            for (int j = 2 * i; j <= N; j += i)
                check[j] = true;
        }
    }
    
    sort(v.begin(), v.end());
    
    cin >> t;
    while (t--) {
        int n, count = 0;
        
        cin >> n;
        for (auto it : v) {
            if (it > n)
                break;
            if (binary_search(v.begin(), v.end(), n - it))
                count++;
        }
        
        if (count % 2 == 0)
            cout << count / 2 << '\n';
        else
            cout << count / 2 + 1 << '\n';
    }
    return 0;
}
