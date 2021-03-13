/*
Title	: BOJ_2231 [분해합]
Author	: Hoseok Lee
Date	: 2021/03/12

https://www.acmicpc.net/problem/2231
https://github.com/hoshogi
*/

/*
분해합이 주어지면 분해합의 자리수를 구한다
분해합 - 분해합의 자리수 * 9 인 수 부터 주어진 분해합 전까지의 수의 분해합을 구하여 비교한다
주어진 수와 같으면 생성자를 출력하고 생성자가 없으면 0을 출력한다
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m = 0;

	cin >> n;
	string str = to_string(n);

	for (int i = n - str.length() * 9;i < n;i++)
	{
		string num = to_string(i);

		m += i;
		for (int j = 0;j < num.length();j++)
		{
			m += num[j] - '0';
		}

		if (n == m)
		{
			cout << num << '\n';
			break;
		}
		if (i == n - 1)
			cout << 0 << '\n';

		m = 0;
	}

	return 0;
}