/*
Title	: BOJ_1297 [TV 크기]
Author	: Hoseok Lee
Date	: 2021/01/18

https://www.acmicpc.net/problem/1297
https://github.com/hoshogi
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
	int len, height, width;

	cin >> len >> height >> width;
	cout << (int)(len / sqrt(height * height + width * width) * height) << " " << (int)(len / sqrt(height * height + width * width) * width) << endl;

	return 0;
}