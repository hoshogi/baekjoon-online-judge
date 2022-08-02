/*
Title   : BOJ_9375 [패션왕 신혜빈]
Author  : Hoseok Lee
Date    : 2022/08/02
https://www.acmicpc.net/problem/9375
https://github.com/hoshogi
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int n, count = 0, result = 1;
        string temp;
        map<string, int> m;
        
        cin >> n;
        for (int i = 0; i < n; i++) {
            string name, clothes;
            
            cin >> name >> clothes;
            if (m.find(clothes) == m.end()) {
                count++;
                m[clothes] = 1;
                temp = clothes;
            }
            else
                m[clothes]++;
        }
        
        if (count == 1)
            cout << m[temp] << '\n';
        else {
            for (auto it : m)
                result *= (it.second + 1);
            cout << result - 1 << '\n';
        }
    }
    return 0;
}
