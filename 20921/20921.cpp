/*
Title   : BOJ_20921 [그렇고 그런 사이]
Author  : Hoseok Lee
Date    : 2022/01/27
https://www.acmicpc.net/problem/20921
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, k;
    
    cin >> n >> k;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }
    
    for (int i = 0; i < n; i++) {
        if (k >= n - 1 - i) {
            cout << v.back() << ' ';
            v.pop_back();
            k -= n - 1 - i;
        } else {
            cout << v.front() << ' ';
            v.erase(v.begin());
        }
    }
    return 0;
}
