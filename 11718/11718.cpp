/*
Title	: BOJ_11718 [그대로 출력하기]
Author	: Hoseok Lee
Date	: 2021/03/16

https://www.acmicpc.net/problem/11718
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;


	// cin >> str 을 사용하면 공백마다 끊어서 출력한다
	while (getline(cin, str))
		cout << str << '\n';

	return 0;
}