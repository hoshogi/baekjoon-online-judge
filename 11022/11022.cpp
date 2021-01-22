/*
Title	: BOJ_11022 [A+B - 8]
Author	: Hoseok Lee
Date	: 2021/01/22

https://www.acmicpc.net/problem/11022
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n, a, b;

	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << endl;
	}

	return 0;
}