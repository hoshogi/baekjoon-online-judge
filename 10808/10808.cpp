/*
Title	: BOJ_10808 [알파벳 개수]
Author	: Hoseok Lee
Date	: 2021/03/19

https://www.acmicpc.net/problem/10808
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int alphabet[26] = { 0 };
	string word;

	cin >> word;
	for (int i = 0;i < word.length();i++)
		alphabet[word[i] - 97]++;

	for (int i = 0;i < 26;i++)
		cout << alphabet[i] << ' ';

	return 0;
}