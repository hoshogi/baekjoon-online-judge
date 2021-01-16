/*
Title	: BOJ_1002 [터렛]
Author	: Hoseok Lee
Date	: 2021/01/15

https://www.acmicpc.net/problem/1002
https://github.com/hoshogi
*/

/*
두 원의 원점과 반지름이 각각 주어졌을때 
두 원 사이의 교점을 구하는 것과 같다.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int T, x1, y1, x2, y2, r1, r2;
	double dist;

	cin >> T;

	for (int i = 0;i < T;i++) 
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); // 두 점 사이의 거리

		if (dist == 0) // 두 점이 같을 때
		{
			if (r1 == r2) // 반지름이 같을 때
				cout << -1 << endl;
			else // 반지름이 다를 때
				cout << 0 << endl;
		}
		else
		{
			if (dist > r1 + r2) // 두 점 사이의 거리가 두 반지름의 합보다 클 때
				cout << 0 << endl;
			else if (dist == r1 + r2) // 두 점 사이의 거리가 두 반지름의 합과 같을 때
				cout << 1 << endl;
			else if (dist > abs(r1 - r2) && dist < r1 + r2) // 두 점 사이의 거리가 두 반지름의 차보다 크고 두 반지름의 합보다 작을 때
				cout << 2 << endl;
			else if (dist == abs(r1 - r2)) // 두 점 사이의 거리가 두 반지름의 차와 같을 때
				cout << 1 << endl;
			else // 두 점 사이의 거리가 두 반지름의 차보다 작을 때
				cout << 0 << endl;
		}
	}
	
	return 0;
}