/*
Title   : BOJ_23323 [황소 다마고치]
Author  : Hoseok Lee
Date    : 2021/11/2
https://github.com/hoshogi
https://www.acmicpc.net/problem/23323
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        long long count = 1;
        long long n, m;
        
        cin >> n >> m;
        
        while (true) {
            if (n == 1)
                break;
            count++;
            n /= 2;
        }
        count += m;
        cout << count << '\n';
    }
    return 0;
}
