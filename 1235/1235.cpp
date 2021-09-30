/*
Title   : BOJ_1235 [학생 번호]
Author  : Hoseok Lee
Date    : 2021/09/30
https://github.com/hoshogi
https://www.acmicpc.net/problem/1235
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool CheckOverlap(vector<string>& seperated) {
    string temp = "";
    for (string str : seperated) {
        if (temp == str)
            return false;
        temp = str;
    }
    return true;
}

int main (void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<string> v;
    string num;
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    for (int i = 0; i < num.length(); i++) {
        vector<string> seperated;
        string temp = "";
        
        for (int j = 0; j < n; j++) {
            string seperated_num = v[j].substr(num.length() - 1 - i);
            seperated.push_back(seperated_num);
        }
        sort(seperated.begin(), seperated.end());
        if (CheckOverlap(seperated)) {
            cout << i + 1 << '\n';
            break;
        }
    }
    return 0;
}
