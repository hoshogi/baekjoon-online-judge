/*
Title	: BOJ_2164 [카드2]
Author	: Hoseok Lee
Date	: 2021.03.21

https://www.acmicpc.net/problem/2164
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	queue<int> q;

	cin >> n;
	for (int i = 1;i <= n;i++)
		q.push(i);
	
	// 카드가 한장 남을때까지 반복
	while (q.size() != 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << '\n';
	return 0;
}