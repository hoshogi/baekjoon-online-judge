/*
Title   : BOJ_1966 [프린터 큐]
Author  : Hoseok Lee
Date    : 2021/10/11
https://github.com/hoshogi
https://www.acmicpc.net/problem/1966
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;

	cin >> t;
	while (t--) {
		int n, m, count = 0;
		priority_queue<int> pq;
		queue< pair <int, int> > q;

		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			int num;

			cin >> num;
			q.push({ num, i });
			pq.push(num);
		}
		while (true) {
			if (q.front().first < pq.top()) {
				q.push(q.front());
				q.pop();
			}
			else {
				count++;
				if (q.front().second == m) {
					cout << count << '\n';
					break;
				}
				else {
					q.pop();
					pq.pop();
				}
			}
		}
	}
	return 0;
}