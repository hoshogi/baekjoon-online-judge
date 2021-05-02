/*
Title   : BOJ_2846 [오르막길]
Author  : Hoseok Lee
Date    : 2021/05/02
 
https://www.acmicpc.net/problem/2846
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

/*
수열이 증가하면 증가하는 차이만큼 sum에 더하고 최대값 max와 비교하여 최대값 측정
수열이 증가하지 않는다면 sum을 0으로 초기화
*/
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, sum = 0, max = 0;
    int seq[1000] = {0, };
    
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> seq[i];
    
    for (int i = 1;i < n;i++)
    {
        if (seq[i] > seq[i - 1])
        {
            sum += seq[i] - seq[i - 1];
            
            if (sum > max)
                max = sum;
        }
        else
            sum = 0;
    }
    
    cout << max << '\n';
    return 0;
}
