/*
Title   : BOJ_11576 [Base Conversion]
Author  : Hoseok Lee
Date    : 2022/07/18
https://www.acmicpc.net/problem/11576
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
    
    int a, b, m, n = 0, mul = 1;
    vector<int> v, result;
    
    cin >> a >> b >> m;
    
    for (int i = 0; i < m; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        n += v[i] * mul;
        mul *= a;
    }
    
    while (n != 0) {
        result.push_back(n % b);
        n /= b;
    }
    reverse(result.begin(), result.end());
    
    for (auto it : result)
        cout << it << ' ';
    
    return 0;
}
