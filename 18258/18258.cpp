/*
Title   : BOJ_18258 [큐 2]
Author  : Hoseok Lee
Date    : 2021/10/11
https://github.com/hoshogi
https://www.acmicpc.net/problem/18258
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	queue<int> q;
	int n;

	cin >> n;
	while (n--) {
		string menu;

		cin >> menu;
		if (menu == "push") {
			int num;

			cin >> num;
			q.push(num);
		}
		else if (menu == "pop") {
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (menu == "size") {
			cout << q.size() << '\n';
		}
		else if (menu == "empty") {
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (menu == "front") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front()<< '\n';
		}
		else if (menu == "back") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}
	return 0;
}