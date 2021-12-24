/*
Title   : BOJ_2864 [5와 6의 차이]
Author  : Hoseok Lee
Date    : 2021/12/24
https://github.com/hoshogi
https://www.acmicpc.net/problem/2864
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b;

	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '6')
			a.replace(i, 1, "5");
	}

	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '6')
			b.replace(i, 1, "5");
	}

	int x = stoi(a);
	int y = stoi(b);

	cout << x + y << ' ';

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '5')
			a.replace(i, 1, "6");
	}

	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '5')
			b.replace(i, 1, "6");
	}

	x = stoi(a);
	y = stoi(b);

	cout << x + y << '\n';
	return 0;
}