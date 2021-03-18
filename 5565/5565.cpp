/*
Title	: BOJ_5565 [영수증]
Author	: Hoseok Lee
Date	: 2021/03/18

https://www.acmicpc.net/problem/5565
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int sum, price;

	cin >> sum;
	for (int i = 0;i < 9;i++)
	{
		cin >> price;
		sum -= price;
	}

	cout << sum << '\n';
	return 0;
}