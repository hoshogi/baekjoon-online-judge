/*
Title   : BOJ_2442 [별 찍기 - 5]
Author  : Hoseok Lee
Date    : 2021/02/20

https://www.acmicpc.net/problem/2442
https://github.com/hoshogi
*/

#include <stdio.h>

int main(void)
{
    int n, i, j;
    
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        for(j = i;j < n - 1;j++)
            printf(" ");
        for(j = 0;j <= 2 * i;j++)
            printf("*");
        
        printf("\n");
    }
    
    return 0;
}
