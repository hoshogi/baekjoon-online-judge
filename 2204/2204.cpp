/*
Title   : BOJ_2204 [도비의 난독증 테스트]
Author  : Hoseok Lee
Date    : 2021/10/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/2204
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (true) {
        vector< pair<string, string> > v;
        int n;
        
        cin >> n;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++) {
            string word, lower = "";
            
            cin >> word;
            for (int j = 0; j < word.length(); j++)
                lower += tolower(word[j]);
            
            v.push_back({lower, word});
        }
        sort(v.begin(), v.end());
        cout << v[0].second << '\n';
    }
    return 0;
}
