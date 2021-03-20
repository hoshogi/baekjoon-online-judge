/*
Title	: BOJ_5597 [과제 안 내신 분..?]
Author	: Hoseok Lee
Date	: 2021/03/20

https://www.acmicpc.net/problem/5597
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num;
	int submit[30] = { 0, };

	for (int i = 0;i < 28;i++)
	{
		cin >> num;
		submit[num - 1]++;
	}
	
	for (int i = 0;i < 30;i++)
	{
		if (submit[i] == 0)
			cout << i + 1 << '\n';
	}

	return 0;
}