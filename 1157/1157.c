/*
Title   : BOJ_1157 [단어 공부]
Author  : Hoseok Lee
Date    : 2021/02/15

https://www.acmicpc.net/problem/1157
https://github.com/hoshogi
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000000];
    int alphabet[26], len, i, j, max, maxIndex;
    
    gets(word);
    len = strlen(word);
    
    for(i = 0;i < len;i++)
    {
        for(j = 0;j < 26;j++)
        {
            if(word[i] == 65 + j || word[i] == 97 + j)
            {
                alphabet[j]++;
                break;
            }
        }
    }
    
    max = alphabet[0];
    maxIndex = 0;
    for(i = 1;i < 26;i++)
    {
        if(max < alphabet[i])
        {
            max = alphabet[i];
            maxIndex = i;
        }
    }
    
    for(i = 0;i < 26;i++)
    {
        if(max == alphabet[i] && maxIndex != i)
        {
            printf("?\n");
            break;
        }
        if(i == 25)
            printf("%c\n", 65 + maxIndex);
    }
   
    return 0;
}
