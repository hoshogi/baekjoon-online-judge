/*
Title	: BOJ_2438 [º° Âï±â - 1]
Author	: Hoseok Lee
Date	: 2021/01/14

https://www.acmicpc.net/problem/2438
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
		for (int j = 0;j <= i;j++)
			cout << "*";
		cout << endl;
	}

	return 0;
}