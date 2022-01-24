/*
Title   : BOJ_2003 [수들의 합 2]
Author  : Hoseok Lee
Date    : 2022/01/24
https://www.acmicpc.net/problem/2003
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, result = 0;
    int num[10000] = {0, };
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        
        cin >> x;
        num[i] = x;
    }
    
    for (int i = 0; i < n; i++) {
        int sum = num[i];
        
        if (sum == m) {
            result++;
            continue;
        } else if (sum > m) {
            continue;
        }
        
        for (int j = i + 1; j < n; j++) {
            sum += num[j];
            
            if (sum == m) {
                result++;
                break;
            } else if (sum > m) {
                break;
            }
        }
    }
    
    cout << result << '\n';
    return 0;
}
