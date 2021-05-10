/*
Title   : BOJ_2490 [윷놀이]
Author  : Hoseok Lee
Date    : 2021/05/10

https://www.acmicpc.net/problem/2490
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n[4];
    
    for (int i = 0;i < 3;i++)
    {
        int countZero = 0;
        
        for (int j = 0;j < 4;j++)
        {
            cin >> n[j];
            
            if (n[j] == 0)
                countZero++;
        }
        
        if (countZero == 0)
            cout << "E" << '\n';
        else if (countZero == 1)
            cout << "A" << '\n';
        else if (countZero == 2)
            cout << "B" << '\n';
        else if (countZero == 3)
            cout << "C" << '\n';
        else
            cout << "D" << '\n';
    }
    
    return 0;
}
