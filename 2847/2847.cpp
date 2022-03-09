/*
Title   : BOJ_2847 [게임을 만든 동준이]
Author  : Hoseok Lee
Date    : 2022/03/09
https://www.acmicpc.net/problem/2847
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, result = 0;
	
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int temp = v[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		if (v[i] >= temp) {
			result += v[i] - temp + 1;
			temp--;
		}
		else {
			temp = v[i];
		}
	}
	
	cout << result << '\n';
	return 0;
}