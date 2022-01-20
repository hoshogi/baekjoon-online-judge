/*
Title   : BOJ_7568 [덩치]
Author  : Hoseok Lee
Date    : 2022/01/20
https://www.acmicpc.net/problem/7568
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    int rank[51];
    vector<pair<int, int> > v;
    
    fill_n(rank, 51, 1);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int weight, height;
        
        cin >> weight >> height;
        v.push_back({weight, height});
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (v[i].first > v[j].first) {
                if (v[i].second > v[j].second)
                    rank[j]++;
            }
            
            if (v[i].first < v[j].first) {
                if (v[i].second < v[j].second)
                    rank[i]++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << rank[i] << ' ';
    }
    return 0;
}
