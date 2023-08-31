/*
Title   : BOJ_18310 [안테나]
Author  : Hoseok Lee
Date    : 2023/08/31
https://www.acmicpc.net/problem/18310
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
    vector<int> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num; 

        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    
    cout << v[(n - 1) / 2] << '\n';
    return 0;
}