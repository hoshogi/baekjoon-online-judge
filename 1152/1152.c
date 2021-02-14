/*
Title   : BOJ_1152 [단어의 개수]
Author  : Hoseok Lee
Date    : 2021/02/14
 
https://www.acmicpc.net/problem/1152
https://github.com/hoshogi
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[1000000];
    int len, wordCount = 0, i;
        
    gets(sentence);
    len = strlen(sentence);
    
    if(sentence[0] != ' ')
        wordCount++;
    
    for(i = 1;i < len;i++)
    {
        
        if(sentence[i-1] == ' ' && sentence[i] != ' ')
            wordCount++;
    }
    
    printf("%d\n", wordCount);
    
    return 0;
}
