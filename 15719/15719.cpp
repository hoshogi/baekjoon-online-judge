/*
Title   : BOJ_15719 [중복된 숫자]
Author  : Hoseok Lee
Date    : 2022/08/06
https://www.acmicpc.net/problem/15719
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

bool check[10000000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        if (!check[num])
            check[num] = true;
        else
            cout << num << '\n';
    }
    return 0;
}
