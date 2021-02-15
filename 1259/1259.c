/*
Title   : BOJ_1259 [팰린드롬수]
Author  : Hoseok Lee
Date    : 2021/02/15
 
https://www.acmicpc.net/problem/1259
https://github.com/hoshogi
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[5];
    int len, i;
    
    while(1)
    {
        gets(word);
        
        if(word[0] == '0')
            break;
        
        len = strlen(word);
        
        // 한 자리 수의 경우도 고려
        for(i = 0;i <= len / 2;i++)
        {
            if(word[i] != word[len - 1 - i])
            {
                printf("no\n");
                break;
            }
            else if(i == len / 2)
            {
                printf("yes\n");
            }
        }
    }

    return 0;
}
