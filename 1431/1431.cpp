/*
Title   : BOJ_1431 [시리얼 번호]
Author  : Hoseok Lee
Date    : 2022/01/14
https://www.acmicpc.net/problem/1431
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string prev, string next) {
    if (prev.length() == next.length()) {
        int prevSum = 0, nextSum = 0;
        
        for (auto it : prev) {
            if (it >= '0' && it <= '9')
                prevSum += atoi(&it);
        }
        
        for (auto it : next) {
            if (it >= '0' && it <= '9')
                nextSum += atoi(&it);
        }
        
        if (prevSum == nextSum)
            return prev < next;
        
        return prevSum < nextSum;
    }
    return prev.length() < next.length();
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<string> v;
    
    cin >> n;
    while (n--) {
        string serial;
        
        cin >> serial;
        v.push_back(serial);
    }
    
    sort(v.begin(), v.end(), compare);
    for (auto it : v)
        cout << it << '\n';
    return 0;
}
