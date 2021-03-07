/*
Title   : BOJ_1003 [피보나치 함수]
Author  : Hoseok Lee
Date    : 2021/03/07
 
https://www.acmicpc.net/problem/1003
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    int zero[41] = {1};
    int one[41] = {0, 1};
    
    for(int i = 2;i < 41;i++)
    {
        zero[i] = zero[i - 1] + zero[i - 2];
        one[i] = one[i - 1] + one[i - 2];
    }
    
    while(t--)
    {
        int n;
        
        cin >> n;
        cout << zero[n] << " " << one[n] << '\n';
    }
    
    return 0;
}

// 다른 풀이: 구조체 사용
/*
#include <iostream>
using namespace std;

struct Fibonacci
{
    int zero, one;

    Fibonacci()
    {
        // 변수 초기화
        zero = 0;
        one = 0;
    }
};

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    Fibonacci fibonacci[41];

    fibonacci[0].zero = 1;
    fibonacci[1].one = 1;

    for (int i = 2;i < 41;i++)
    {
        fibonacci[i].zero = fibonacci[i - 1].zero + fibonacci[i - 2].zero;
        fibonacci[i].one = fibonacci[i - 1].one + fibonacci[i - 2].one;
    }

    cin >> t;
    while(t--)
    {
        int n;

        cin >> n;
        cout << fibonacci[n].zero << " " << fibonacci[n].one << '\n';
    }

    return 0;
}
*/
