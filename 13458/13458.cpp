/*
Title   : BOJ_13458 [시험 감독]
Author  : Hoseok Lee
Date    : 2022/03/31
https://www.acmicpc.net/problem/13458
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, b, c;
	long long result = 0;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;

		cin >> a;
		v.push_back(a);
	}

	cin >> b >> c;
	for (auto it : v) {
		it -= b;
		result++;
		if (it > 0) {
			if (it % c == 0)
				result += it / c;
			else
				result += it / c + 1;

		}
	}
	cout << result << '\n';
	return 0;
}