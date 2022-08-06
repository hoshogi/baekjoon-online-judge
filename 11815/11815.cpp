/*
Title   : BOJ_11815 [짝수? 홀수?]
Author  : Hoseok Lee
Date    : 2022/08/06
https://www.acmicpc.net/problem/11815
https://github.com/hoshogi
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    
    cin >> n;
    while (n--) {
        long double num;
        
        cin >> num;
        long long temp = (long long)sqrt(num);
        if (temp * temp == num)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }
    return 0;
}
