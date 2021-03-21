/*
Title	: BOJ_1075 [나누기]
Author	: Hoseok Lee
Date	: 2021/03/21

https://www.acmicpc.net/problem/1075
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, f;

	cin >> n >> f;

	n -= n % 100;
	while (true)
	{
		if (n % f == 0)
			break;

		n++;
	}

	n %= 100;
	if (n < 10)
		cout << 0 << n << '\n';
	else
		cout << n << '\n';

	return 0;
}