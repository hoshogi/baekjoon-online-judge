/*
Title   : BOJ_11866 [요세푸스 문제 0]
Author  : Hoseok Lee
Date    : 2021/03/10

https://www.acmicpc.net/problem/11866
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    queue<int> q1, q2;

    cin >> n >> k;

    for (int i = 0;i < n;i++)
        q1.push(i + 1);

    while (!q1.empty())
    {
        for (int i = 0;i < k - 1;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }

        q2.push(q1.front());
        q1.pop();
    }

    cout << "<";
    while (!q2.empty())
    {
        if (q2.size() != 1)
            cout << q2.front() << ", ";
        else
            cout << q2.front();
        q2.pop();
    }
    cout << ">" << '\n';

    return 0;
}