/*
Title   : BOJ_15889 [호 안에 수류탄이야!!]
Author  : Hoseok Lee
Date    : 2022/01/14
https://www.acmicpc.net/problem/15889
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<pair<int, int> > v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back({num, 0});
    }
    
    for (int i = 0; i < n - 1; i++) {
        int distance;
        
        cin >> distance;
        v[i].second = distance;
    }

    int max_distance = 0;
    
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << "권병장님, 중대장님이 찾으십니다" << '\n';
            exit(0);
        }
        
        max_distance = max(max_distance, v[i].first + v[i].second);
        
        if (v[i + 1].first > max_distance)
            break;
    }

    cout << "엄마 나 전역 늦어질 것 같아" << '\n';
    return 0;
}
