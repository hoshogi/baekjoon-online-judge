/*
Title   : BOJ_9009 [피보나치]
Author  : Hoseok Lee
Date    : 2022/01/25
https://www.acmicpc.net/problem/9009
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    int count = 2;
    vector<int> fibonacci = {1, 1, };
    
    while (true) {
        int num = fibonacci[count - 1] + fibonacci[count - 2];
        
        count++;
        if (num > 1000000000)
            break;
        fibonacci.push_back(num);
    }
    
    sort(fibonacci.begin(), fibonacci.end(), greater<>());
    
    cin >> t;
    while (t--) {
        int num;
        vector<int> v;

        cin >> num;
        for (auto it : fibonacci) {
            if (num >= it) {
                num -= it;
                v.push_back(it);
                
                if (num == 0)
                    break;
            }
        }
        sort(v.begin(), v.end());
        for (auto it: v)
            cout << it << ' ';
        cout << '\n';
    }
    return 0;
}
