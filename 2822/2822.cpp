/*
Title   : BOJ_2822 [점수 계산]
Author  : Hoseok Lee
Date    : 2021/09/17
https://github.com/hoshogi
https://www.acmicpc.net/problem/2822
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int sum = 0;
    vector< pair<int, int> > v;
    vector<int> index;
    
    for (int i = 1;i <= 8;i++)
    {
        int score;
        
        cin >> score;
        v.push_back({score, i});
    }
    
    sort(v.begin(), v.end(), greater<>());
    for (int i = 0;i < 5;i++)
    {
        sum += v[i].first;
        index.push_back(v[i].second);
    }
    
    sort(index.begin(),index.end());
    cout << sum << '\n';
    for (auto i : index)
        cout << i << ' ';
    
    return 0;
}
