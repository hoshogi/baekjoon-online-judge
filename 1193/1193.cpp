/*
Title	: BOJ_1193 [분수찾기]
Author	: Hoseok Lee
Date	: 2021/03/20

https://www.acmicpc.net/problem/1193
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, sum = 0, num = 1;

	cin >> x;
	while (true)
	{
		sum += num;

		if (x <= sum)
			break;
		else
			num++;
	}

	if (num % 2 == 0)
	{
		cout << x - sum + num << '/'; // x - (sum - num)
		cout << 1 - x + sum << '\n'; // num + 1 - {x - (sum - num)}
	}
	else
	{
		cout << 1 - x + sum << '/'; // num + 1 - {x - (sum - num)}
		cout << x - sum + num << '\n'; //  x - (sum - num)
	}

	return 0;
}