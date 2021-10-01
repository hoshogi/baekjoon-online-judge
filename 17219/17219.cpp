/*
Title   : BOJ_17219 [비밀번호 찾기]
Author  : Hoseok Lee
Date    : 2021/10/01
https://github.com/hoshogi
https://www.acmicpc.net/problem/17219
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    map<string, string> secret;
    
    cin >> n >> m;
    while (n--) {
        string site, password;
        
        cin >> site >> password;
        secret.insert({site, password});
    }
    
    while (m--) {
        string site;
        
        cin >> site;
        cout << secret[site] << '\n';
    }
    return 0;
}
