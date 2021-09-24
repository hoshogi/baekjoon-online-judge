/*
Title   : BOJ_16212 [정열적인 정렬]
Author  : Hoseok Lee
Date    : 2021/09/24
https://github.com/hoshogi
https://www.acmicpc.net/problem/16212
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v;
    int n;
    
    cin >> n;
    while (n--)
    {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << ' ';
    return 0;
}
