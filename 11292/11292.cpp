/*
Title   : BOJ_11292 [키 큰 사람]
Author  : Hoseok Lee
Date    : 2021/10/01
https://github.com/hoshogi
https://www.acmicpc.net/problem/11292
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<double, string> prev, pair<double, string> next) {
    return prev.first > next.first;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (true) {
        int n;
        vector< pair<double, string> > v;
        
        cin >> n;
        if (n == 0)
            break;
        while (n--) {
            string name;
            double height;
            
            cin >> name >> height;
            v.push_back({height, name});
        }
        stable_sort(v.begin(), v.end(), compare);
        double temp = v[0].first;
        for (auto it : v) {
            if (it.first != temp)
                break;
            cout << it.second << ' ';
        }
        cout << '\n';
    }
    return 0;
}
