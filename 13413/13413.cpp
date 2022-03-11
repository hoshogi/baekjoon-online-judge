/*
Title   : BOJ_13413 [오셀로 재배치]
Author  : Hoseok Lee
Date    : 2022/03/12
https://www.acmicpc.net/problem/13413
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int n;
        int black = 0, white = 0;
        string initial, target;
        
        cin >> n >> initial >> target;
        for (int i = 0; i < n; i++) {
            if (initial[i] != target[i]) {
                if (initial[i] == 'B')
                    black++;
                else
                    white++;
            }
        }
        cout << max(black, white) << '\n';
    }
    return 0;
}
