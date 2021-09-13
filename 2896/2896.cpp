/*
Title   : BOJ_2896 [무알콜 칵테일]
Author  : Hoseok Lee
Date    : 2021/09/13
https://github.com/hoshogi
https://www.acmicpc.net/problem/2896
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    double juice[3], rate[3];
    vector<double> v;
    
    for (int i = 0;i < 3;i++)
        cin >> juice[i];
    
    for (int i = 0;i < 3;i++)
        cin >> rate[i];
    
    for (int i = 0;i < 3;i++)
    {
        double div = juice[i] / rate[i];
        v.push_back(div);
    }

    sort(v.begin(), v.end());
    for (int i = 0;i < 3;i++)
        printf("%.6lf ", juice[i] - rate[i] * v[0]);
    
    return 0;
}
