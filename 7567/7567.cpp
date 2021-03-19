/*
Title	: BOJ_7567 [그릇]
Author	: Hoseok Lee
Date	: 2021/03/19

https://www.acmicpc.net/problem/7567
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int height = 10;
	string plate;
	
	cin >> plate;
	for (int i = 1;i < plate.length();i++)
	{
		if (plate[i - 1] != plate[i])
			height += 10;
		else
			height += 5;
	}

	cout << height << '\n';
	return 0;
}