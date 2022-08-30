/*
Title   : BOJ_20291 [파일 정리]
Author  : Hoseok Lee
Date    : 2022/08/30
https://www.acmicpc.net/problem/20291
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
    
    int n;
    map<string, int> m;
    
    cin >> n;
    while (n--) {
        string str, file;
        
        cin >> str;
        int index = str.find(".");
        file = str.substr(index + 1);
        
        if (m.find(file) == m.end())
            m[file] = 1;
        else
            m[file]++;
    }
    
    for (auto it : m)
        cout << it.first << ' ' << it.second << '\n';
    return 0;
}
