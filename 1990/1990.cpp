/*
Title   : BOJ_1990 [소수인팰린드롬]
Author  : Hoseok Lee
Date    : 2022/08/06
https://www.acmicpc.net/problem/1990
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a, b;
    vector<int> v = {5, 7};
    for (int i = 1; i <= 1000; i++) {
        string num = "";
        string front = to_string(i);
        string back = front;
        
        reverse(back.begin(), back.end());
        num += front + back;
        v.push_back(stoi(num));
        for (int i = 0; i < 10; i++) {
            num = front + to_string(i) + back;
            v.push_back(stoi(num));
        }
    }
    sort(v.begin(), v.end());
    
    cin >> a >> b;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > b)
            break;
        if (v[i] >= a && isPrime(v[i]))
            cout << v[i] << '\n';
    }

    cout << -1 << '\n';
    return 0;
}
