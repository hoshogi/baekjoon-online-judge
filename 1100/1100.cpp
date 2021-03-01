/*
Title	: BOJ_1100 [하얀 칸]
Author	: Hoseok Lee
Date	: 2021/03/02

https://www.acmicpc.net/problem/1100
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str[8];
	int count = 0;

	for (int i = 0;i < 8;i++)
		getline(cin, str[i]);

	for (int i = 0;i < 8;i++)
		for (int j = 0;j < 8;j++)
			if (str[i][j] == 'F')
				if ((i + j) % 2 == 0)
					count++;

	cout << count << '\n';
	return 0;
}