/*
Title   : BOJ_2108 [통계학]
Author  : Hoseok Lee
Date    : 2021/10/02
https://github.com/hoshogi
https://www.acmicpc.net/problem/2108
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

bool compare (pair<int, int> prev, pair<int, int> next) {
    if (prev.first == next.first)
        return prev.second < next.second;
    return prev.first > next.first;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    int count[8001] = {0, };
    double sum = 0;
    vector<int> v;
    vector< pair<int, int> > num_count;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
        sum += num;
        count[num + 4000]++;
    }
    
    for (int i = 0;i < 8001;i++) {
        if (count[i] != 0) {
            num_count.push_back({count[i], i - 4000});
        }
    }
    sort(v.begin(), v.end());
    sort(num_count.begin(), num_count.end(), compare);
    
    int index = 0;
    if (num_count[0].first == num_count[1].first)
        index = 1;

    cout << round(sum / n) << '\n';
    cout << v[n / 2] << '\n';
    cout << num_count[index].second << '\n';
    cout << v[n - 1] - v[0] << '\n';
}
