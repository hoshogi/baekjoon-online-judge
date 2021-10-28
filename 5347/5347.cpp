/*
Title   : BOJ_5347 [LCM]
Author  : Hoseok Lee
Date    : 2021/10/28
https://github.com/hoshogi
https://www.acmicpc.net/problem/5347
*/

#include <iostream>
using namespace std;

int Gcd(long long a, long long b) {
	long long r;

	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	cin >> n;
	while (n--) {
		long long a, b;

		cin >> a >> b;
		cout << a * b / Gcd(a, b) << '\n';
	}
	return 0;
}