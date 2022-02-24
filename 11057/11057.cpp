/*
Title   : BOJ_11057 [오르막 수]
Author  : Hoseok Lee
Date    : 2022/02/24
https://www.acmicpc.net/problem/11057
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long num[10];
    long long result[1001] = {0, 10};
    
    fill_n(num, 10, 1);
    for (int i = 2; i <= 1000; i++) {
        int temp[10];
        copy(num, num + 10, temp);
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k < j; k++) {
                num[j] += temp[k];
                num[j] %= 10007;
            }
            
            result[i] += num[j];
            result[i] %= 10007;
        }
        
    }
    
    cin >> n;
    cout << result[n] << '\n';
    return 0;
}
