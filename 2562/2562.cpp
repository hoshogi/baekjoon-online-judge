/*
Title	: BOJ_2562 [최댓값]
Author	: Hoseok Lee
Date	: 2021/01/19

https://www.acmicpc.net/problem/2562
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int num[9], max_num = 0, max_index;

	for (int i = 0;i < 9;i++)
	{
		cin >> num[i];

		if (num[i] > max_num)
		{
			max_num = num[i];
			max_index = i+1;
		}
	}
	
	cout << max_num << endl;
	cout << max_index << endl;

	return 0;
}
