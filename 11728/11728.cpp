/*
Title   : BOJ_11728 [배열 합치기]
Author  : Hoseok Lee
Date    : 2021/05/11

https://www.acmicpc.net/problem/11728
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

/*
MergeSort에서 두개의 배열을 Merge하는 방법을 응용
*/

void Merge(int a[], int b[], int n, int m)
{
    int* c = new int [n + m];
    
    int i = 0, j = 0, k = 0;
    
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    
    if (i >= n)
        copy(b + j, b + m, c + k);
    else if (j >= m)
        copy(a + i, a + n, c + k);
    
    for (int l = 0;l < m + n;l++)
        cout << c[l] << ' ';
    
    delete []c;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int a[1000000], b[1000000];
    
    cin >> n >> m;
    for (int i = 0;i < n;i++)
        cin >> a[i];
    
    for (int i = 0;i < m;i++)
        cin >> b[i];
    
    Merge(a, b, n, m);
    return 0;
}
