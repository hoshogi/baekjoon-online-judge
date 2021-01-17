/*
Title	: BOJ_10817 [세 수]
Author	: Hoseok Lee
Date	: 2021/01/17

https://www.acmicpc.net/problem/10817
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int a[3], tmp;

	for (int i = 0;i < 3;i++)
		cin >> a[i];
	
	// Selection Sort (선택 정렬)
	for (int i = 0;i < 3;i++)
		for (int j = i+1;j < 3;j++)
		{
			if (a[j] < a[i])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	
	cout << a[1] << endl;
	return 0;
}