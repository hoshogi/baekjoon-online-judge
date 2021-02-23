/*
Title	: BOJ_1032 [명령 프롬포트]
Author	: Hoseok Lee
Date	: 2021/02/23

https://www.acmicpc.net/problem/1032

*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	cin >> n;
	string* cmd = new string[n];

	cin >> cmd[0];
	for (int i = 1;i < n;i++)
	{
		cin >> cmd[i];
		for (int j = 0;j < cmd[i].length();j++)
		{
			if (cmd[0][j] != cmd[i][j])
				cmd[0][j] = '?';
		}
	}

	cout << cmd[0] << '\n';
	return 0;
}