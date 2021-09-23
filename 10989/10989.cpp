/*
Title   : BOJ_10989 [수 정렬하기 3]
Author  : Hoseok Lee
Date    : 2021/09/23
https://github.com/hoshogi
https://www.acmicpc.net/problem/10989
*/

#include <iostream>
using namespace std;

int num[10001] = {0, };

// Counting Sort 사용
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    while (n--)
    {
        int x;
        
        cin >> x;
        num[x]++;
    }
    
    for (int i = 0;i < 10001;i++)
        for (int j = 0;j < num[i];j++)
            cout << i << '\n';
    
    return 0;
}
