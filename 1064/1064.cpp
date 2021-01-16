/*
Title	: BOJ_1064 [평행사변형]
Author	: Hoseok Lee
Date	: 2021/01/15

https://www.acmicpc.net/problem/1064
https://github.com/hoshogi
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
	int x1, y1, x2, y2, x3, y3;
	double smallest, largest, dist[3];

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if ((y1 - y2) * (x1 - x3) == (y1 - y3) * (x1 - x2)) // 세 점이 평행할 때
		cout << -1 << endl;
	else
	{
		dist[0] = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) + sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
		dist[1] = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
		dist[2] = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)) + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));

		smallest = dist[0];
		largest = dist[0];

		if (dist[1] < smallest)
			smallest = dist[1];
		if (dist[2] < smallest)
			smallest = dist[2];

		if (dist[1] > largest)
			largest = dist[1];
		if (dist[2] > largest)
			largest = dist[2];

		printf("%.9f\n", 2 * (largest - smallest));
		return 0;
	}
}