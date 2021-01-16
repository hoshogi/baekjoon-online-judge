/*
Title	: BOJ_14861 [사분면 고르기]
Author	: Hoseok Lee
Date	: 2021/01/14

https://www.acmicpc.net/problem/8393
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0)
		cout << "1";
	else if (x < 0 && y>0)
		cout << "2";
	else if (x < 0 && y < 0)
		cout << "3";
	else
		cout << "4";

	return 0;
}