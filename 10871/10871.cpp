/*
Title	: BOJ_10871 [X보다 작은 수]
Author	: Hoseok Lee
Date	: 2021/01/17

https://www.acmicpc.net/problem/10871
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n, x, num;

	cin >> n >> x;
	for (int i = 0;i < n;i++)
	{
		cin >> num;
		if (num < x)
			cout << num << " ";
	}

	return 0;
}