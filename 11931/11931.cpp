/*
Title   : BOJ_11931 [수 정렬하기 4]
Author  : Hoseok Lee
Date    : 2021/09/19
https://github.com/hoshogi
https://www.acmicpc.net/problem/11931
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
    
    int n;
    vector<int> v;
    
    cin >> n;
    while (n--)
    {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end(), greater<>());
    for (int i : v)
        cout << i << '\n';
    return 0;
}
