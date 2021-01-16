/*
Title	: BOJ_2884 [알람 시계]
Author	: Hoseok Lee
Date	: 2021/01/15

https://www.acmicpc.net/problem/2884
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int hour, min;

	cin >> hour >> min;

	if (min < 45)
	{
		if (hour == 0)
			hour = 23;
		else
			hour--;

		min = 15 + min;
	}
	else
	{
		min -= 45;
	}

	cout << hour << " " << min << endl;

	return 0;
}