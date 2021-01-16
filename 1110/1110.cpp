/*
Title	: BOJ_1110 [더하기 사이클]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/1110
https://github.com/
*/

#include <iostream>
using namespace std;

int main(void)
{
	int x, y, z, num, newNum, count = 0;

	cin >> num;

	newNum = num;

	do
	{
		if (newNum < 10)
		{
			x = 0;
			y = newNum;
			z = x + y;
			newNum = (y * 10) + (z % 10);
		}
		else
		{
			x = newNum / 10;
			y = newNum % 10;
			z = x + y;
			newNum = (y * 10) + (z % 10);
		}
		count++;
	} while (num != newNum);

	cout << count << endl;
	return 0;
}