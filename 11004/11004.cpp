/*
Title   : BOJ_11004 [K번째 수]
Author  : Hoseok Lee
Date    : 2021/05/08

https://www.acmicpc.net/problem/11004
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, num;
    vector<int> v;
    
    cin >> n >> k;
    for (int i = 0;i< n;i++)
    {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    cout << v[k - 1] << '\n';
    
    return 0;
}
