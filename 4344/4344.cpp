/*
Title	: BOJ_4344 [평균은 넘겠지]
Author	: Hoseok Lee
Date	: 2021/01/18

https://www.acmicpc.net/problem/4344
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int c, n, * score, sum = 0, count = 0;
	double average;

	cin >> c;
	for (int i = 0;i < c;i++)
	{
		cin >> n;
		score = new int[n]; // 동적으로 배열 할당, 배열 길이는 상수가 아니여도 된다

		for (int j = 0;j < n;j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		
		average = sum / n;
		for (int j = 0;j < n;j++)
		{
			if (score[j] > average)
				count++;
		}
		printf("%.3f%%\n", (double)count / (double)n * 100);
		sum = 0;
		count = 0;
		delete[] score; // 배열 할당 해제
	}

	return 0;
}