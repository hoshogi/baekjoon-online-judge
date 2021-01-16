/*
Title	: BOJ_2588 [°ö¼À]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/2588
https://github.com/
*/

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, tmp;
	
	cin >> a >> b;
	
	tmp = b % 10;
	cout << a * tmp << endl;

	tmp = (b % 100) / 10;
	cout << a * tmp << endl;

	tmp = b / 100;
	cout << a * tmp << endl;

	cout << a * b << endl;
	return 0;
}