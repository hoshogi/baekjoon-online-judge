/*
Title   : BOJ_26007 [Codepowers]
Author  : Hoseok Lee
Date    : 2022/11/29
https://www.acmicpc.net/problem/26007
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int score[100001] = {0, };
int sum[100001] = {0, };

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m, k, x;
    
    cin >> n >> m >> k >> x;
    score[0] = x;
    for (int i = 1; i <= n; i++) {
        int plus;
        
        cin >> plus;
        score[i] = score[i - 1] + plus;
        sum[i] = sum[i - 1];
        if (score[i] < k)
            sum[i]++;
    }
    
    for (int i = 0; i < m; i++) {
        int l, r;
        
        cin >> l >> r;
        cout << sum[r - 1] - sum[l - 1] << '\n';
    }
    return 0;
}
