/*
Title	: BOJ_9498 [시험 성적]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/9498
https://github.com/
*/

#include <iostream>
using namespace std;

int main(void)
{
	int score;

	cin >> score;
	if (score >= 90 && score <= 100)
		cout << 'A' << endl;
	else if (score >= 80 && score <= 89)
		cout << 'B' << endl;
	else if (score >= 70 && score <= 79)
		cout << 'C' << endl;
	else if (score >= 60 && score <= 69)
		cout << 'D' << endl;
	else
		cout << 'F' << endl;

	return 0;
}