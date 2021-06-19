/*
Title   : BOJ_10815 [숫자 카드]
Author  : Hoseok Lee
Date    : 2021/06/20

https://www.acmicpc.net/problem/10815
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

int card[500001];

int BinarySearch(int low, int high, int num)
{
    while (true)
    {
        if (low > high)
            return 0;
        
        int mid = (low + high) / 2;
        
        if (num == card[mid])
        {
            int left = mid - 1;
            int right = mid + 1;
            while (card[left] == num)
                left--;
            while (card[right] == num)
                right++;
            
            return right - left - 1;
        }
        else if (num > card[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        int num;
        
        cin >> num;
        card[i] = num;
    }
    
    sort(card, card + n);
    
    cin >> m;
    for (int i = 0;i < m;i++)
    {
        int num;
        
        cin >> num;
        cout << BinarySearch(0, n - 1, num) << ' ';
    }
    
    return 0;
}
