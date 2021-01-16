/*
Title	: BOJ_1004 [어린 왕자]
Author	: Hoseok Lee
Date	: 2021/01/15

https://www.acmicpc.net/problem/1004
https://github.com/hoshogi
*/

#include <iostream>
#include <math.h>
using namespace std;

/*
원의 원점과 반지름을 입력 받은 후
인자로 전달된 두 점중 한점만 원 안에 있는 경우
true 반환
*/
bool OnlyOnePointInCircleArea(int x1, int y1, int x2, int y2)
{
	int x3, y3, r;
	double d1, d2;

	cin >> x3 >> y3 >> r;
	d1 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	d2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	
	if ((d1 < r && d2 > r) || (d1 > r && d2 < r))
		return true;
	else
		return false;
}

int main(void)
{
	int T, N, x1, y1, x2, y2, count = 0;
	double dist;

	cin >> T;
	for (int i = 0;i < T;i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> N;
		
		for (int j = 0;j < N;j++)
			if (OnlyOnePointInCircleArea(x1, y1, x2, y2))
				count++;

		cout << count << endl;
		count = 0;
	}

	return 0;
}