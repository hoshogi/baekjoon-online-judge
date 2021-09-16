/*
Title   : BOJ_11650 [좌표 정렬하기]
Author  : Hoseok Lee
Date    : 2021/09/16
https://github.com/hoshogi
https://www.acmicpc.net/problem/11650
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<pair<int, int>> v;
    
    cin >> n;
    while (n--)
    {
        int x, y;
        
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    
    sort(v.begin(), v.end());
    for (auto i : v)
        cout << i.first << ' ' << i.second << '\n';
    return 0;
}
