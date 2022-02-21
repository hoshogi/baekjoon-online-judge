/*
Title   : BOJ_5052 [전화번호 목록]
Author  : Hoseok Lee
Date    : 2022/02/21
https://www.acmicpc.net/problem/5052
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool Check(vector<long long> hash[10], vector<long long> compareNum[10], bool len[10]) {
    for (int i = 0; i < 10; i++) {
        if (len[i] == false)
            continue;
        sort(hash[i].begin(), hash[i].end());
        
        for (int j = 0; j < compareNum[i].size(); j++) {
            if (binary_search(hash[i].begin(), hash[i].end(), compareNum[i][j]))
                return false;
        }
    }
    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    bool len[10] = {false, };
    
    cin >> t;
    while (t--) {
        int n;
        vector<long long> hash[10], compareNum[10];
        
        cin >> n;
        for (int i = 0; i < n; i++) {
            string str;
            
            cin >> str;
            len[str.length() - 1] = true;
            compareNum[str.length() - 1].push_back(stoll(str));
            for (int j = 0; j < str.length() - 1; j++) {
                long long num = stoll(str.substr(0, j + 1));
                
                hash[j].push_back(num);
            }
        }
        
        if (Check(hash, compareNum, len))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
