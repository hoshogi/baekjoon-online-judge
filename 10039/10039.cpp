/*
Title	: BOJ_10039 [Æò±Õ Á¡¼ö]
Author	: Hoseok Lee
Date	: 2021/01/17

https://www.acmicpc.net/problem/10039
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int score[5], sum = 0;

	for (int i = 0;i < 5;i++)
	{
		cin >> score[i];

		if (score[i] < 40)
			score[i] = 40;

		sum += score[i];
	}

	cout << sum / 5 << endl;
	return 0;
}