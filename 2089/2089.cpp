/*
Title   : BOJ_2089 [-2진수]
Author  : Hoseok Lee
Date    : 2022/07/18
https://www.acmicpc.net/problem/2089
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    vector<int> result;
    
    cin >> n;
    
    if (n == 0) {
        cout << 0 << '\n';
        exit(0);
    }
    
    while (n != 0) {
        int num = n % -2;
        if (num == - 1) {
            n = n / -2 + 1;
            result.push_back(1);
        }
        else {
            result.push_back(num);
            n /= -2;
        }
    }

    reverse(result.begin(), result.end());
    for (auto it : result)
        cout << it;
    return 0;
}
