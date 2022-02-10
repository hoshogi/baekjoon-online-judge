/*
Title   : BOJ_2798 [블랙잭]
Author  : Hoseok Lee
Date    : 2021/03/07
 
https://www.acmicpc.net/problem/2798
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int sum = 0, max = 0;
    
    cin >> n >> m;
    int* card = new int [n];
    
    for(int i = 0;i < n;i++)
        cin >> card[i];
    
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
            for(int k = 0;k < n;k++)
            {
                if (i != j && j != k && k != i)
                {
                    sum = card[i] + card[j] + card[k];
                    if (sum <= m)
                    {
                        if (max < sum)
                            max = sum;
                    }
                    
                    sum = 0;
                }
            }
    
    cout << max << '\n';
    return 0;
}
