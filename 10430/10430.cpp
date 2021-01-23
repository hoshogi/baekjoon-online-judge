/*
Title	: BOJ_10430 [나머지]
Author	: Hoseok Lee
Date	: 2021/01/23

https://www.acmicpc.net/problem/10430
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int A, B, C;

	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	return 0;
}