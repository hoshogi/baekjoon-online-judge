/*
Title   : BOJ_3135 [라디오]
Author  : Hoseok Lee
Date    : 2021/11/7
https://github.com/hoshogi
https://www.acmicpc.net/problem/3135
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, n, min_gap;

	cin >> a >> b >> n;
	min_gap = abs(a - b);

	while (n--) {
		int num, gap;

		cin >> num;
		gap = abs(num - b);
		min_gap = min(min_gap, gap);
	}

	if (min_gap == abs(a - b))
		cout << min_gap << '\n';
	else
		cout << min_gap + 1 << '\n';
	return 0;
}