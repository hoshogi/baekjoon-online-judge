/*
Title   : BOJ_1356 [유진수]
Author  : Hoseok Lee
Date    : 2021/09/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/1356
*/

#include <iostream>
#include <string>
using namespace std;

/*
내가 놓친 반례: 1을 입력했을때 NO가 나와야한다
*/
bool CheckNum(string num)
{
    int countZero = 0, left = 1, right = 1;;
    
    if (num == "1")
        return false;
    
    for (int i = 0;i < num.length();i++)
    {
        if (num[i] != '0')
            right *= num[i] - '0';
        else
        {
            countZero++;
            if (countZero > 1)
                return true;
        }
    }
    
    if (countZero == 1)
        return false;

    for (int i = 0;i < num.length();i++)
    {
        left *= num[i] - '0';
        right /= num[i] - '0';
    
        if (left == right)
            return true;
    }
    
    return false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string num;
    
    cin >> num;
    cout << (CheckNum(num) ? "YES" : "NO") << '\n';
    
    return 0;
}
