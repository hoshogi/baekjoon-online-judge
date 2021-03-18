/*
Title	: BOJ_5585 [거스름돈]
Author	: Hoseok Lee
Date	: 2021/03/18

https://www.acmicpc.net/problem/5585
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int price, money = 1000, count = 0;
	int change[] = { 500, 100, 50, 10, 5, 1 };

	cin >> price;
	money -= price;

	for (int i = 0;i < 6;i++)
	{
		if (money >= change[i])
		{
			count += money / change[i];
			money -= (money / change[i]) * change[i];
		}

		if (money == 0)
			break;
	}

	cout << count << '\n';
	return 0;
}