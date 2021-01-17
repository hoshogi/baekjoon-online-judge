/*
Title	: BOJ_2475 [°ËÁõ¼ö]
Author	: Hoseok Lee
Date	: 2021/01/17

https://www.acmicpc.net/problem/2475
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int num[6], sum = 0;

	for (int i = 0;i < 5;i++)
	{
		cin >> num[i];
		sum += num[i] * num[i];
	}

	cout << sum % 10 << endl;
	return 0;
}