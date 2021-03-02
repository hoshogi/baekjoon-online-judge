/*
Title	: BOJ_2775 [부녀회장이 될테야]
Author	: Hoseok Lee
Date	: 2021/03/02

https://www.acmicpc.net/problem/2775
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	int apt[15][15] = { 0 };

	
	for (int i = 1;i < 15;i++)
		apt[0][i] = i;

	for (int i = 1;i < 15;i++)
	{
		for (int j = 1;j < 15;j++)
		{
			for (int k = j;k >= 1;k--)
				apt[i][j] += apt[i - 1][k];
		}
	}

	cin >> t;
	while (t--)
	{
		int k, n;

		cin >> k >> n;
		cout << apt[k][n] << '\n';
	}

	return 0;
}