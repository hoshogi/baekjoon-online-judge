/*
Title	: BOJ_20492 [세금]
Author	: Hoseok Lee
Date	: 2021/01/28

https://www.acmicpc.net/problem/20492
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int prize;

	cin >> prize;
	printf("%d %d\n",(int)(prize * 0.78), (int)(prize * (0.8 + 0.2 * 0.78)));

	return 0;
}