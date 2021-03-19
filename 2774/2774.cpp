/*
Title	: BOJ_2774 [대소문자 바꾸기]
Author	: Hoseok Lee
Date	: 2021/03/19

https://www.acmicpc.net/problem/2774
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string word;

	cin >> word;
	for (int i = 0;i < word.length();i++)
	{
		/*
		'A'의 아스키 코드 : 65
		'a'의 아스키 코드 : 97
		*/

		if (word[i] >= 'A' && word[i] <= 'Z')
			cout << (char)(word[i] + 32);
		else if (word[i] >= 'a' && word[i] <= 'z')
			cout << (char)(word[i] - 32);
	}

	return 0;
}