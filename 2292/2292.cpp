/*
Title	: BOJ_2292 [벌집]
Author	: Hoseok Lee
Date	: 2021/03/12

https://www.acmicpc.net/problem/2292
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, count = 1, sub = 1;

	cin >> n;
	
	while (true)
	{
		n -= sub;
		if (count == 1) // 첫 번째 방일 때
			sub *= 6;
		else // 이후에는 벌집의 둘레가 6씩 증가
			sub += 6;

		if (n > 0) // 지나가야 하는 방의 수가 남았을 때
		{
			count++;
		}
		else // 출력
		{
			cout << count << '\n';
			break;
		}
	}

	return 0;
}