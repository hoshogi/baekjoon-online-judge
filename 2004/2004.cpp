/*
Title   : BOJ_2004 [조합 0의 개수]
Author  : Hoseok Lee
Date    : 2021/03/25

https://www.acmicpc.net/problem/2004
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int CountTwoNum(long long num)
{
    int count = 0;
    // num 값이 최대 2,000,000,000 이므로 num을 비교하는 mul값이 int의 범위를 넘어가기 때문에 long long으로 선언
    long long mul = 2;
    
    while(num / mul != 0)
    {
        count += num / mul;
        mul *= 2;
    }
    
    return count;
}

int CountFiveNum(long long num)
{
    int count = 0;
    // num 값이 최대 2,000,000,000 이므로 num을 비교하는 mul값이 int의 범위를 넘어가기 때문에 long long으로 선언
    long long mul = 5;
    
    while(num / mul != 0)
    {
        count += num / mul;
        mul *= 5;
    }
    
    return count;
}

/*
팩토리얼의 0의 개수는 2의 개수가 5의 개수보다 항상 많기 때문에 5의 개수만 세어주면 됬는데
조합 0의 개수는 예외사항도 있으므로 2의 개수와 5의 개수를 모두 세주어야 한다.
예외: 20 C 16 = 4845
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, m;
    
    cin >> n >> m;
    
    int twoNum = CountTwoNum(n) - CountTwoNum(n - m) - CountTwoNum(m);
    int fiveNum = CountFiveNum(n) - CountFiveNum(n - m) - CountFiveNum(m);
    
    cout << min(twoNum, fiveNum) << '\n';
    
    return 0;
}
