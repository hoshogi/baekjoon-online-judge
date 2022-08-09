/*
Title   : BOJ_14501 [퇴사]
Author  : Hoseok Lee
Date    : 2022/08/09
https://www.acmicpc.net/problem/14501
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0;
    int d[16] = {0, };
    vector<pair<int, int>> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t, p;
        
        cin >> t >> p;
        v.push_back({t, p});
    }
    
    for (int i = 0; i < n; i++) {
        int day = i + v[i].first;
        if (day <= n) {
            int max_profit = 0;
            for (int j = 1; j <= i; j++)
                max_profit = max(max_profit, d[j]);
            d[day] = max(d[day], max_profit + v[i].second);
        }
    }
    
    for (int i = 1; i <= n; i++)
        result = max(result, d[i]);
    
    cout << result << '\n';
    return 0;
}
