/*
Title   : BOJ_1107 [리모컨]
Author  : Hoseok Lee
Date    : 2022/09/23
https://www.acmicpc.net/problem/1107
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m;
    bool broken[10] = {false, };
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int num;
        
        cin >> num;
        broken[num] = true;
    }
    
    int result = abs(n - 100);
    
    for (int i = 0; i <= 1000000; i++) {
        string str = to_string(i);
        bool check = false;
        
        for (int j = 0; j < str.length(); j++) {
            if (broken[str[j] - '0']) {
                check = true;
                break;
            }
        }
        
        if (check)
            continue;
        
        result = min(result, abs(i - n) + (int)str.length());
    }
    
    cout << result << '\n';
    return 0;
}
