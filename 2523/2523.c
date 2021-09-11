/*
Title   : BOJ_2523 [별 찍기 - 13]
Author  : Hoseok Lee
Date    : 2021/09/11
https://github.com/hoshogi
https://www.acmicpc.net/problem/2523
*/

#include <stdio.h>

int main(void)
{
    int i, j, n;
    
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        for (j = 0;j <= i;j++)
            printf("*");
        printf("\n");
    }
    
    for (i = 0;i < n - 1;i++)
    {
        for (j = n - i - 1;j > 0;j--)
            printf("*");
        printf("\n");
    }
    
    return 0;
}
