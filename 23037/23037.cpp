/*
Title   : BOJ_23037 [5의 수난]
Author  : Hoseok Lee
Date    : 2022/08/03
https://www.acmicpc.net/problem/23037
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string n;
    int result = 0;
    
    cin >> n;
    for (auto it : n)
        result += pow(it - '0', 5);
    
    cout << result << '\n';
    return 0;
}
