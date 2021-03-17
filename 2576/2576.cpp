/*
Title	: BOJ_2576 [홀수]
Author	: Hoseok Lee
Date	: 2021/03/17

https://www.acmicpc.net/problem/2576
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num[7], min = 100, sum = 0;

	for (int i = 0;i < 7;i++)
	{
		cin >> num[i];

		if (num[i] % 2 == 1)
		{
			sum += num[i];

			if (num[i] < min)
				min = num[i];
		}
	}

	if (min == 100)
		cout << -1 << '\n';
	else
	{
		cout << sum << '\n';
		cout << min << '\n';
	}

	return 0;
}