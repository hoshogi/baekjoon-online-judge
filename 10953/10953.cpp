/*
Title	: BOJ_10953 [A + B - 6]
Author	: Hoseok Lee
Date	: 2021/03/11

https://www.acmicpc.net/problem/10953
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	
	cin >> t;
	while (t--)
	{
		string str;
		
		cin >> str;
		cout << str[0] + str[2] - 96 << '\n';
	}

	return 0;
}