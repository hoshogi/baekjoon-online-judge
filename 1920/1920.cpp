/*
Title   : BOJ_1920 [수 찾기]
Author  : Hoseok Lee
Date    : 2021/04/06
 
https://www.acmicpc.net/problem/1920
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

// 이진 탐색 알고리즘
int BinarySearch(int a[], int left, int right, int x)
{
    while (left <= right)
    {
        int middle = (left + right) / 2;
        
        if (a[middle] == x)
            return 1;
        else if (a[middle] > x)
            right = middle - 1;
        else if (a[middle] < x)
            left = middle + 1;
    }
    
    return 0;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, x;
    
    cin >> n;
    int* a = new int [n];
    
    for(int i = 0;i < n;i++)
        cin >> a[i];
    
    sort(a, a + n);
    
    cin >> m;
    while(m--)
    {
        cin >> x;
        cout << BinarySearch(a, 0, n - 1, x) << '\n';
    }
    
    return 0;
}
