/*
Title   : BOJ_2161 [카드1]
Author  : Hoseok Lee
Date    : 2021/04/05
 
https://www.acmicpc.net/problem/2161
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    queue<int> q;
    int n;
    
    cin >> n;
    for(int i = 1;i <= n;i++)
        q.push(i);
    
    while(!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    return 0;
}
