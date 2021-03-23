/*
Title   : BOJ_1929 [소수 구하기]
Author  : Hoseok Lee
Date    : 2021/03/23

https://www.acmicpc.net/problem/1929
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

/*
에라토스테네스의 체 : 1부터 N까지의 범위 안에 들어가는 모든 소수를 구하려면 에라토스테네스의 체를 사용
1. 2부터 N까지 모든 수를 써놓는다
2. 아직 지워지지 않은 수 중에서 가장 작은 수를 찾는다
3. 그 수는 소수이다
4. 이제 그 수의 배수를 모두 지운다
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n;
    bool check[1000001] = {true, true, false, }; // 지워졌으면 true
    
    cin >> m >> n;
    for (int i = 2;i <= n;i++)
    {
        if (check[i] == false)
        {
            for (int j = i * 2;j <= n;j += i) // i의 배수를 모두 지워준다
                check[j] = true;
        }
    }
    
    for (int i = m;i <= n;i++)
    {
        if (check[i] == false)
            cout << i << '\n';
    }
    
    return 0;
}
