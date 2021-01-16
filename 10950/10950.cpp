/*
Title	: BOJ_10950 [A+B - 3]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/10950
https://github.com/
*/

#include <iostream>
using namespace std;

int main(void)
{
	int T, a, b;

	cin >> T;
	for (int i = 0;i < T;i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}