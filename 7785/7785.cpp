/*
Title   : BOJ_7785 [회사에 있는 사람]
Author  : Hoseok Lee
Date    : 2021/10/07
https://github.com/hoshogi
https://www.acmicpc.net/problem/7785
*/

#include <iostream>
#include <string>
#include <map>
#include <functional>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    map<string, string, greater<string>> m;

    cin >> n;
    while (n--) {
        string name, state;
        
        cin >> name >> state;
        m[name] = state;
    }
    
    for (auto it : m) {
        if (it.second == "enter")
            cout << it.first << '\n';
    }
    return 0;
}
