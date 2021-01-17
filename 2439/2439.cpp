/*
Title	: BOJ_2439 [º° Âï±â - 2]
Author	: Hoseok Lee
Date	: 2021/01/17

https://www.acmicpc.net/problem/2439
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n;

	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = n;j > i + 1;j--)
			cout << " ";
		for (int k = 0;k <= i;k++)
			cout << "*";
		cout << endl;
	}

	return 0;
}