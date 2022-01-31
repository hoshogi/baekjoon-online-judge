/*
Title   : BOJ_8892 [팰린드롬]
Author  : Hoseok Lee
Date    : 2022/01/27
https://www.acmicpc.net/problem/8892
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool CheckPalindrome(string concat) {
    string reverse_concat = concat;
    reverse(reverse_concat.begin(), reverse_concat.end());
    
    if (concat == reverse_concat) {
        cout << concat << '\n';
        return true;
    }
    return false;
}

bool Check(vector<string>& v) {
    int k = v.size();
    
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            string concat = v[i] + v[j];
            
            if (CheckPalindrome(concat))
                return true;
            
            concat = v[j] + v[i];
          
            if (CheckPalindrome(concat))
                return true;
        }
    }
    return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int k;
        
        cin >> k;
        vector<string> v(k);
        for (int i = 0; i < k; i++)
            cin >> v[i];
        if(!Check(v))
            cout << '0' << '\n';
    }
    return 0;
}
