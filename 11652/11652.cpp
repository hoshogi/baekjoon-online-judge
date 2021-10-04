/*
Title   : BOJ_11652 [카드]
Author  : Hoseok Lee
Date    : 2021/10/04
https://github.com/hoshogi
https://www.acmicpc.net/problem/11652
*/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, long long> prev, pair<int, long long> next) {
    if (prev.first == next.first)
        return prev.second < next.second;
    return prev.first > next.first;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<long long, int> m;
    vector< pair<int, long long> > v;
    int n;
    
    cin >> n;
    while (n--) {
        long long num;
        
        cin >> num;
        if (m.count(num))
            m[num]++;
        else
            m.insert({num, 1});
    }
    
    for (auto it : m)
        v.push_back({it.second, it.first});
    
    sort(v.begin(), v.end(), compare);
    cout << v[0].second << '\n';
    return 0;
}
