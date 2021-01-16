/*
Title	: BOJ_1085 [직사각형에서 탈출]
Author	: Hoseok Lee
Date	: 2021/01/15

https://www.acmicpc.net/problem/1085
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int x, y, w, h, min;

	cin >> x >> y >> w >> h;
	min = x;
	if (y < min)
		min = y;
	if (h - y < min)
		min = h - y;
	if (w - x < min)
		min = w - x;

	cout << min << endl;
	
	return 0;
}