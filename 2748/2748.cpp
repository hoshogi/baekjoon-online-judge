/*
Title	: BOJ_2748 [피보나치 수 2]
Author	: Hoseok Lee
Date	: 2021/03/21

https://www.acmicpc.net/problem/2748
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n;
	long long fib[91] = { 0, 1, }; // long long 으로 선언
	
	cin >> n;
	for (int i = 2;i <= n;i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	cout << fib[n] << '\n';

	return 0;
}