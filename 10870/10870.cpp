/*
Title	: BOJ_10870 [피보나치 수 5]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/10870
https://github.com/
*/

#include <iostream>
using namespace std;

int Fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(void)
{
	int n;

	cin >> n;
	cout << Fibonacci(n) << endl;

	return 0;
}