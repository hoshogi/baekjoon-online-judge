/*
Title   : BOJ_11557 [Yangjojang of The Year]
Author  : Hoseok Lee
Date    : 2021/09/18
https://github.com/hoshogi
https://www.acmicpc.net/problem/11557
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
    
    int t;
    
    cin >> t;
    while (t--)
    {
        int n;
        vector< pair<int, string> > v;
        
        cin >> n;
        while (n--)
        {
            string univ;
            int alcohol;
            
            cin >> univ >> alcohol;
            v.push_back({alcohol, univ});
        }
        
        sort(v.begin(), v.end());
        cout << v.back().second << '\n';
    }
    
    return 0;
}
