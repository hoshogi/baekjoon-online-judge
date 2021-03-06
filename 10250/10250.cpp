/*
Title   : BOJ_10250 [ACM 호텔]
Author  : Hoseok Lee
Date    : 2021/03/06
 
https://www.acmicpc.net/problem/10250
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
        int h, w, n;
        
        cin >> h >> w >> n;
        if (n % h == 0)
        {
            cout << h;
            
            if (n / h >= 10)
                cout << n / h << '\n';
            else
                cout << 0 << n / h << '\n';
        }
        else
        {
            cout << n % h;
            
            if (n / h + 1 >= 10)
                cout << n / h + 1 << '\n';
            else
                cout << 0 << n / h + 1 << '\n';
        }
    }
    
    return 0;
}
