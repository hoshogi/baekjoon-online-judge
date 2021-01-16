/*
Title	: BOJ_3009 [네 번째 점]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/3009
https://github.com/
*/

#include <iostream>
using namespace std;

int main(void)
{
	int x[4], y[4];

	for (int i = 0;i < 3;i++)
		cin >> x[i] >> y[i];

	if (x[0] == x[1])
		x[3] = x[2];
	else if (x[0] == x[2])
		x[3] = x[1];
	else
		x[3] = x[0];

	if (y[0] == y[1])
		y[3] = y[2];
	else if (y[0] == y[2])
		y[3] = y[1];
	else
		y[3] = y[0];

	cout << x[3] << " " << y[3] << endl;

	return 0;
}