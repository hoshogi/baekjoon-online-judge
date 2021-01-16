/*
Title	: BOJ_10952 [A+B - 5]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/10952
https://github.com/
*/

#include <iostream>
using namespace std;

int main(void)
{
	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;
		
		cout << a + b << endl;
	}
		
	return 0;
}