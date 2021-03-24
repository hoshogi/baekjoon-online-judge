/*
Title   : BOJ_1676 [팩토리얼 0의 개수]
Author  : Hoseok Lee
Date    : 2021/03/24

https://www.acmicpc.net/problem/1676
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

/*
N! = 1 * 2 ... * n
0이 몇 개인지 알아내려면 N!을 소인수분해했을 때, 2와 5가 몇 개나오는지 알아야 한다
5의 개수가 항상 2의 개수 보다 적기 때문에 5의 개수만 세어주면 된다
N! 0의 개수 = [N / 5] + [N / 5^2] + [N / 5^3] + ...
*/

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, count = 0, mul = 5;

	cin >> n;
	while (true)
	{
		if (n / mul == 0)
			break;

		count += n / mul;
		mul *= 5;
	}

	cout << count << '\n';

	return 0;
}