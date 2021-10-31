/*
Title   : BOJ_23320 [홍익 절대평가]
Author  : Hoseok Lee
Date    : 2021/10/31
https://github.com/hoshogi
https://www.acmicpc.net/problem/23320
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, y;
    int a[100] = {0, };
    int count = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x >> y;
    
    for (int i = 0; i < n; i++)
        if (a[i] >= y)
            count++;
    
    cout << abs(n * (double)x / 100) << ' ' << count << '\n';
    return 0;
}
