/*
Title   : BOJ_6359 [만취한 상범]
Author  : Hoseok Lee
Date    : 2021/05/05

https://www.acmicpc.net/problem/6359
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    while(t--)
    {
        int n, count = 0;
        bool isOpened[101] = {false, };
        
        cin >> n;
        for (int i = 1;i <= n;i++)
        {
            for (int j = i;j <= n;j += i)
                if (isOpened[j] == false)
                    isOpened[j] = true;
                else
                    isOpened[j] = false;
        }
        
        for (int i = 1;i <= n;i++)
            if (isOpened[i] == true)
                count++;
        
        cout << count << '\n';
    }
    
    return 0;
}
