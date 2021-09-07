/*
Title   : BOJ_11098 [첼시를 도와줘!]
Author  : Hoseok Lee
Date    : 2021/09/07
https://github.com/hoshogi
https://www.acmicpc.net/problem/11098
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, max_price = 0;
    string max_name = "";
    
    cin >> n;
    while (n--)
    {
        int p;
        
        cin >> p;
        while (p--)
        {
            int price;
            string name;
            
            cin >> price >> name;
            if (price > max_price)
            {
                max_price = price;
                max_name = name;
            }
        }
        cout << max_name << '\n';
        max_price = 0;
    }
    
    return 0;
}
