/*
Title	: BOJ_2753 [À±³â]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/2753
https://github.com/
*/

#include <iostream>
using namespace std;

int LeapYear(int year)
{
	if (year % 400 == 0)
		return 1;
	else if (year % 100 == 0)
		return 0;
	else if (year % 4 == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	int year;

	cin >> year;
	cout << LeapYear(year) << endl;

	return 0;
}