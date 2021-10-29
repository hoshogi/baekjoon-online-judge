/*
Title   : BOJ_9613 [GCD 합]
Author  : Hoseok Lee
Date    : 2021/10/29
https://github.com/hoshogi
https://www.acmicpc.net/problem/9613
*/

#include <iostream>
using namespace std;

int Gcd(int a, int b) {
    int r;
    
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int n;
        int num[100] = {0, };
        long long sum = 0;
        
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> num[i];
        
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                sum += Gcd(num[i], num[j]);
        
        cout << sum << '\n';
    }
    return 0;
}
