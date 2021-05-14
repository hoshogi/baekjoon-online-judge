/*
Title   : BOJ_2386 [도비의 영어 공부]
Author  : Hoseok Lee
Date    : 2021/05/14

https://www.acmicpc.net/problem/2386
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		int count = 0;
		char c, d;
		string str;

		cin >> c;
		if (c == '#')
			break;

		if (c >= 'a' && c <= 'z')
			d = c + ('A' - 'a');
		else if (c >= 'A' && c <= 'Z')
			d = c - ('A' - 'a');

		getline(cin, str);
		for (int i = 0;i < str.length();i++)
			if (str[i] == c || str[i] == d)
				count++;
	
		cout << c << ' ' << count << '\n';
	}

	return 0;
}