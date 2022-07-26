/*
Title   : BOJ_11053 [가장 긴 증가하는 부분 수열]
Author  : Hoseok Lee
Date    : 2022/07/26
https://www.acmicpc.net/problem/11053
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
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i])
                d[i] = max(d[i], d[j]);
        }
        d[i]++;
        result = max(result, d[i]);
    }
    
    cout << result << '\n';
    return 0;
}
