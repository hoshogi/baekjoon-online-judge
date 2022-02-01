/*
Title   : BOJ_14425 [문자열 집합]
Author  : Hoseok Lee
Date    : 2022/01/28
https://www.acmicpc.net/problem/14425
https://github.com/hoshogi
*/

#include<iostream>
#include<set>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    set<string> s;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        s.insert(str);
    }
    
    int result = 0;
    for (int i = 0; i < m; i++) {
        string str;
        
        cin >> str;
        if (s.find(str) != s.end())
            result++;
    }
    cout << result << '\n';
    return 0;
}
