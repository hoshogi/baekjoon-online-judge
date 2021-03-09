/*
Title   : BOJ_2839 [설탕 배달]
Author  : Hoseok Lee
Date    : 2021/03/09

https://www.acmicpc.net/problem/2839
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, count = 0;
    
    cin >> n;
    
    /*
    먼저 5로 나누어 지는지 확인한다.
    5로 나누어 지지않으면 3씩 빼고 count에 1을 추가하면서 확인한다.
    */
    
    while (true)
    {
        if (n % 5 == 0)
        {
            count += n / 5;
            n = 0;
        }
        else
        {
            n -= 3;
            count++;
        }
        
        if (n == 0)
        {
            cout << count << '\n';
            break;
        }
        else if (n < 0)
        {
            cout << -1 << '\n';
            break;
        }
    }
    
    return 0;
}
