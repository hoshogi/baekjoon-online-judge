/*
Title   : BOJ_2440 [별 찍기 - 3]
Author  : Hoseok Lee
Date    : 2021/01/20

https://www.acmicpc.net/problem/2440
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int n;

	cin >> n;
	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
			cout << "*";
		cout << endl;
	}

	return 0;
}