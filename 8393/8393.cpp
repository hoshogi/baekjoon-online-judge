/*
Title	: BOJ_8393 [гу]
Author	: Hoseok Lee
Date	: 2021/01/14

https://www.acmicpc.net/problem/8393
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n, sum = 0;

	cin >> n;
	for (int i = 0;i <= n;i++)
	{
		sum += i;
	}

	cout << sum << endl;

	return 0;
}