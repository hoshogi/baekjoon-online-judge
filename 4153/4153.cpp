/*
Title	: BOJ_4153 [직각삼각형]
Author	: Hoseok Lee
Date	: 2021/01/27

https://www.acmicpc.net/problem/4153
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

bool RightAngleTriangle(int a, int b, int c)
{
	if (a * a + b * b == c * c)
		return true;
	else if (b * b + c * c == a * a)
		return true;
	else if (c * c + a * a == b * b)
		return true;
	else
		return false;
}

int main(void)
{
	int a, b, c;

	while (true)
	{
	cin >> a >> b >> c;
	
	if (a == 0 && b == 0 && c == 0)
		break;
	
	if (RightAngleTriangle(a, b, c))
		cout << "right" << endl;
	else
		cout << "wrong" << endl;
	}

	return 0;
}