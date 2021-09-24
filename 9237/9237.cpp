/*
Title   : BOJ_9237 [이장님 초대]
Author  : Hoseok Lee
Date    : 2021/09/24
https://github.com/hoshogi
https://www.acmicpc.net/problem/9237
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
    
    vector<int> v;
    int n;
    
    cin >> n;
    while (n--)
    {
        int t;
        
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), greater<>());
    
    int result = 1, day = v[0];
    
    for (int i : v)
    {
        if (i > day)
            day = i;
        
        day--;
        result++;
    }
    
    result += day + 1;
    cout << result << '\n';
    return 0;
}
