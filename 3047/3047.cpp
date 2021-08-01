/*
Title   : BOJ_3047 [ABC]
Author  : Hoseok Lee
Date    : 2021/08/01
https://github.com/hoshogi
https://www.acmicpc.net/problem/3047
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num;
    vector<int> v;
    string str;
    
    for (int i = 0;i < 3;i++)
    {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    cin >> str;
    
    for (int i = 0;i < 3;i++)
    {
        if (str[i] == 'A')
            cout << v[0] << ' ';
        else if (str[i] == 'B')
            cout << v[1] << ' ';
        else if (str[i] == 'C')
            cout << v[2] << ' ';
    }
    
    return 0;
}
