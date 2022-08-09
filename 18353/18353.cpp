/*
Title   : BOJ_18353 [병사 배치하기]
Author  : Hoseok Lee
Date    : 2022/08/09
https://www.acmicpc.net/problem/18353
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0;
    int a[2000] = {0, };
    int d[2000] = {0, };
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--)
            if (a[i] < a[j])
                d[i] = max(d[i], d[j]);
        d[i]++;
    }
    
    for (int i = 0; i < n; i++)
        result = max(result, d[i]);
        
    cout << n - result << '\n';
    return 0;
}
