/*
Title	: BOJ_1546 [평균]
Author	: Hoseok Lee
Date	: 2021/01/18

https://www.acmicpc.net/problem/1546
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n, max = 0;
	double* score, sum = 0;

	cin >> n;
	score = new double[n];

	for (int i = 0;i < n;i++)
	{
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0;i < n;i++)
	{
		score[i] = score[i] / max * 100;
		sum += score[i];
	}

	cout << sum / n << endl;
	return 0;
}