/*
Title   : BOJ_11054 [가장 긴 바이토닉 부분 수열]
Author  : Hoseok Lee
Date    : 2022/08/09
https://www.acmicpc.net/problem/11054
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0;
    int a[1000];
    int d[1000] = {0, };
    int dr[1000] = {0, };
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--)
            if (a[i] > a[j])
                d[i] = max(d[i], d[j]);
        d[i]++;
    }
    
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                dr[i] = max(dr[i], dr[j]);
        dr[i]++;
    }
    
    for (int i = 0; i < n; i++)
        result = max(result, d[i] + dr[i] - 1);
    cout << result << '\n';
    return 0;
}
