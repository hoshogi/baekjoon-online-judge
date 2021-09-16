/*
Title   : BOJ_15969 [행복]
Author  : Hoseok Lee
Date    : 2021/09/16
https://github.com/hoshogi
https://www.acmicpc.net/problem/15969
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
    vector<int> v;
    
    cin >> n;
    while(n--)
    {
        int score;
        
        cin >> score;
        v.push_back(score);
    }
    
    sort(v.begin(), v.end());
    cout << v.back() - v.front() <<'\n';
    return 0;
}
