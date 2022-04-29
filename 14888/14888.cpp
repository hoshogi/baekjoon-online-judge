/*
Title   : BOJ_14888 [연산자 끼워넣기]
Author  : Hoseok Lee
Date    : 2022/04/29
https://www.acmicpc.net/problem/14888
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Operate(int x, int y, int menu) {
    if (menu == 0)
        return x + y;
    if (menu == 1)
        return x - y;
    if (menu == 2)
        return x * y;
    if (menu == 3)
        return x / y;
    return 0;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<int> v, calculate, result;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    for (int i = 0; i < 4; i++) {
        int num;
        
        cin >> num;
        for (int j = 0; j < num; j++)
            calculate.push_back(i);
    }
    
    do {
        int num = v[0];
        int numCount = 0;
    
        for (int i = 0; i < n - 1; i++) {
            num = Operate(num, v[numCount + 1], calculate[i]);
            numCount++;
        }
        result.push_back(num);
        reverse(calculate.begin() + n - 1, calculate.end());
    } while(next_permutation(calculate.begin(), calculate.end()));
    
    sort(result.begin(), result.end());
    cout << result.back() << '\n';
    cout << result.front() << '\n';
    return 0;
}
