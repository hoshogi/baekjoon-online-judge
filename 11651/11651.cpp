/*
Title   : BOJ_11651 [좌표 정렬하기 2]
Author  : Hoseok Lee
Date    : 2021/09/16
https://github.com/hoshogi
https://www.acmicpc.net/problem/11651
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
        v.push_back(make_pair(y, x));
    }
    
    sort(v.begin(), v.end());
    for (auto i : v)
        cout << i.second << ' ' << i.first << '\n';
    return 0;
}
