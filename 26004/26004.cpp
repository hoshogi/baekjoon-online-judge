/*
Title   : BOJ_26004 [HI-ARC]
Author  : Hoseok Lee
Date    : 2022/11/29
https://www.acmicpc.net/problem/26004
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, answer = 1e9;
    string str;
    map<char, int> m;
    
    cin >> n >> str;
    
    for (auto it : str)
        m[it]++;
    answer = min(answer, m['H']);
    answer = min(answer, m['I']);
    answer = min(answer, m['A']);
    answer = min(answer, m['R']);
    answer = min(answer, m['C']);
    
    cout << answer << '\n';
    return 0;
}
