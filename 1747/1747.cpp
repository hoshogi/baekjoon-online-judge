/*
Title   : BOJ_1747 [소수&팰린드롬]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/1747
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define NUM 1005000
using namespace std;

bool palindrome(int n) {
    string str = to_string(n);
    
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1])
            return false;
    }
    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    bool check[NUM] = {true, true, false, };
    vector<int> v;
    
    for (int i = 2; i <= NUM; i++) {
        if (!check[i]) {
            v.push_back(i);
            for (int j = 2 * i; j <= NUM; j += i)
                check[j] = true;
        }
    }
    
    cin >> n;
    int index = lower_bound(v.begin(), v.end(), n) - v.begin();
    for (int i = index; i <= NUM; i++) {
        if (palindrome(v[i])) {
            cout << v[i] << '\n';
            exit(0);
        }
    }
    return 0;
}
