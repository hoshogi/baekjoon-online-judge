/*
Title   : BOJ_1453 [피시방 알바]
Author  : Hoseok Lee
Date    : 2021/04/15
 
https://www.acmicpc.net/problem/1453
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    bool seat[101] = {false, };
    int n, count = 0;
    
    cin >> n;
    while (n--)
    {
        int num;
        
        cin >> num;
        if (seat[num] == false)
            seat[num] = true;
        else
            count++;
    }
    
    cout << count << '\n';
}
