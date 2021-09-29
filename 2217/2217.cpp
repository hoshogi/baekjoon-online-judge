/*
Title   : BOJ_2217 [로프]
Author  : Hoseok Lee
Date    : 2021/09/29
https://github.com/hoshogi
https://www.acmicpc.net/problem/2217
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, max_weight = 0;
    vector<int> v;
    
    cin >> n;
    for (int i = 0;i < n;i++) {
        int weight;
        
        cin >> weight;
        v.push_back(weight);
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0;i < n;i++)
        max_weight = max((int)((v.size() - i) * v[i]), max_weight);
    
    cout << max_weight << '\n';
    return 0;
}
