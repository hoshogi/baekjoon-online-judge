/*
Title	: BOJ_3052 [나머지]
Author	: Hoseok Lee
Date	: 2021/01/19

https://www.acmicpc.net/problem/3052
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int num[10], count = 1;

	for (int i = 0;i < 10;i++)
	{
		cin >> num[i];
		num[i] %= 42;

		for (int j = 0;j < i;j++)
			if (num[i] == num[j])
				break;
			else if (j == i-1 && num[i] != num[j])
				count++;
	}

	cout << count << endl;
	return 0;
}