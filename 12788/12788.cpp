/*
Title   : BOJ_12788 [제 2회 IUPC는 잘 개최될 수 있을까?]
Author  : Hoseok Lee
Date    : 2021/11/7
https://github.com/hoshogi
https://www.acmicpc.net/problem/12788
*/

#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, k, count = 0, sum = 0;
	vector<int> v;

	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		int num;

		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < n; i++) {
		sum += v[i];
		count++;

		if (sum >= m * k) {
			cout << count << '\n';
			break;
		}
		if (i == n - 1)
			cout << "STRESS" << '\n';
	}
	return 0;
}