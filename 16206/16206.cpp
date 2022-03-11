/*
Title   : BOJ_16206 [롤케이크]
Author  : Hoseok Lee
Date    : 2022/03/11
https://www.acmicpc.net/problem/16206
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, result = 0;
    vector<int> multipleOfTen, notMultipleOfTen;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        if (num % 10 == 0)
            multipleOfTen.push_back(num);
        else
            notMultipleOfTen.push_back(num);
    }
    
    sort(multipleOfTen.begin(), multipleOfTen.end());
    sort(notMultipleOfTen.begin(), notMultipleOfTen.end());
    
    for (int i = 0; i < multipleOfTen.size(); i++) {
        if (multipleOfTen[i] / 10 > m + 1) {
            result += m;
            m = 0;
        }
        else {
            result += multipleOfTen[i] / 10;
            m -= multipleOfTen[i] / 10 - 1;
        }
    }
    
    for (int i = 0; i < notMultipleOfTen.size(); i++) {
        if (notMultipleOfTen[i] / 10 >= m) {
            result += m;
            m = 0;
        }
        else {
            result += notMultipleOfTen[i] / 10;
            m -= notMultipleOfTen[i] / 10;
        }
    }

    cout << result << '\n';
    return 0;
}
