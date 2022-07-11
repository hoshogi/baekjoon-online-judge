/*
Title   : BOJ_1373 [2진수 8진수]
Author  : Hoseok Lee
Date    : 2022/07/11
https://www.acmicpc.net/problem/1373
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char transfer(string str) {
    int num = 0;
    int mul = 1;
    
    for (int i = 0; i < str.length(); i++) {
        num += (str[i] - '0') * mul;
        mul *= 2;
    }
    
    return num + '0';
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string num;
    vector<char> result;
    
    cin >> num;
    reverse(num.begin(), num.end());
    for (int i = 0; i < num.length(); i++) {
        string str = num.substr(i, 3);
        result.push_back(transfer(str));
        i += 2;
    }
    
    reverse(result.begin(), result.end());
    for (auto it : result)
        cout << it;
    return 0;
}
