/*
Title	: BOJ_5543 [상근날드]
Author	: Hoseok Lee
Date	: 2021/01/17

https://www.acmicpc.net/problem/5543
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int hamburger[3], side[2], cheapest = 2000;

	for (int i = 0;i < 3;i++)
	{
		cin >> hamburger[i];
		cheapest = min(cheapest, hamburger[i]);
	}

	for (int i = 0;i < 2;i++)
	{
		cin >> side[i];
	}

	cout << cheapest + min(side[0], side[1]) - 50 << endl;
	return 0;
}