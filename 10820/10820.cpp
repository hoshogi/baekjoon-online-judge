/*
Title	: BOJ_10820 [문자열 분석]
Author	: Hoseok Lee
Date	: 2021/03/19

https://www.acmicpc.net/problem/10820
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int small = 0, big = 0, num = 0, space = 0;
	string str;

	while (getline(cin, str))
	{
		for (int i = 0;i < str.length();i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				small++;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				big++;
			else if (str[i] >= '0' && str[i] <= '9')
				num++;
			else if (str[i] == ' ')
				space++;
		}

		cout << small << ' ' << big << ' ' << num << ' ' << space << '\n';
		small = 0;
		big = 0;
		num = 0;
		space = 0;
	}

	return 0;
}