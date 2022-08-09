/*
Title   : BOJ_13398 [연속합 2]
Author  : Hoseok Lee
Date    : 2022/08/09
https://www.acmicpc.net/problem/13398
https://github.com/hoshogi
*/

#include <iostream>
#define INF 1e9
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = -INF;
    int a[100001];
    int d[100002] = {0, };
    int dr[100002] = {0, };
    
    cin >> n;
    fill_n(d, n + 2, -INF);
    fill_n(dr, n + 2, -INF);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++)
        d[i] = max(d[i - 1] + a[i], a[i]);
    
    for (int i = n; i > 0; i--)
        dr[i] = max(dr[i + 1] + a[i], a[i]);
    
    for (int i = 1; i <= n; i++)
        result = max(result, d[i]);
    
    for (int i = 1; i <= n; i++)
        result = max(result, d[i - 1] + dr[i + 1]);
    
    cout << result << '\n';
    return 0;
}
