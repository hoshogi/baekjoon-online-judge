/*
Title   : BOJ_1920 [수 찾기]
Author  : Hoseok Lee
Date    : 2022/05/04
https://www.acmicpc.net/problem/1920
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;

		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;

		cin >> num;
		if (binary_search(v.begin(), v.end(), num))
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
	return 0;
}