/*
Title	: BOJ_2739 [±¸±¸´Ü]
Author	: Hoseok Lee
Date	: 2021/01/13

https://www.acmicpc.net/problem/2739
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n;

	cin >> n;
	for (int i = 1;i <= 9;i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}

	return 0;
}