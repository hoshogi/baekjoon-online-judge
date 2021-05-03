/*
Title   : BOJ_11328 [Strfry]
Author  : Hoseok Lee
Date    : 2021/05/02
 
https://www.acmicpc.net/problem/11328
https://github.com/hoshogi
*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/*
풀이: 입력받은 2개의 문자열을 sort하여 두 문자열이 같은지 비교
다른 풀이: 첫번째 두번째 문자열의 각각 알파벳의 빈도 수 비교
*/

bool CheckStrfry(char word1[], char word2[])
{
    if (strlen(word1) != strlen(word2))
        return false;
    
    sort(word1, word1 + strlen(word1));
    sort(word2, word2 + strlen(word2));
    
    if (strcmp(word1, word2) != 0)
        return false;
    
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    char word1[1001], word2[1002];
    
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> word1 >> word2;
        
        if (CheckStrfry(word1, word2))
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }
    
    return 0;
}
