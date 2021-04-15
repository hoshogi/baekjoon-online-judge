/*
Title   : BOJ_10610 [30]
Author  : Hoseok Lee
Date    : 2021/04/15
 
https://www.acmicpc.net/problem/10610
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool Compare(int a, int b)
{
    return a > b;
}

/*
30의 배수인지 확인
- 10의 배수인지 확인 : 0이 있는지 확인
- 3의 배수인지 확인 : 각 자리 수의 합이 3의 배수인지 확인
*/
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int countZero = 0, sum = 0;
    string str;
    
    cin >> str;
    for(int i = 0;i < str.length();i++)
    {
        if (str[i] == '0')
            countZero++;
        
        sum += str[i] - '0';
    }
    
    if (countZero == 0 || sum % 3 != 0)
        cout << -1 << '\n';
    else
    {
        vector<char> v;
        
        for (int i = 0;i < str.length();i++)
            v.push_back(str[i]);
        
        sort(v.begin(), v.end(), Compare);
        
        for (int i = 0;i < v.size();i++)
            cout << v[i];
    }
    
    return 0;
}
