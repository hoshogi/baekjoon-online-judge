/*
Title   : BOJ_2443 [별 찍기 - 6]
Author  : Hoseok Lee
Date    : 2021/02/25

https://www.acmicpc.net/problem/2443
https://github.com/hoshogi
*/

#include <stdio.h>

int main(void)
{
    int n, i, j;
    
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < i;j++)
            printf(" ");
        for (j = 2 * (n - i) - 1;j > 0;j--)
            printf("*");
        printf("\n");
    }
    
    return 0;
}
