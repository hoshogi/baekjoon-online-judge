/*
Title	: BOJ_10797 [10부제]
Author	: Hoseok Lee
Date	: 2021/01/18

https://www.acmicpc.net/problem/10797
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int day, num[5], count = 0;

	cin >> day;
	for (int i = 0;i < 5;i++)
	{
		cin >> num[i];
		if (day == num[i])
			count++;
	}

	cout << count << endl;
	return 0;
}