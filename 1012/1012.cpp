/*
Title   : BOJ_1012 [유기농 배추]
Author  : Hoseok Lee
Date    : 2022/05/04
https://www.acmicpc.net/problem/1012
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int m, n;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };

void bfs(int board[50][50], int x, int y, bool visited[50][50]) {
	queue<pair<int, int> > q;
	visited[x][y] = true;
	q.push({ x, y });

	while (!q.empty()) {
		int nowX = q.front().first;
		int nowY = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int tempX = nowX + dx[i];
			int tempY = nowY + dy[i];
			
			if (tempX >= 0 && tempX < m && tempY >= 0 && tempY < n && board[tempX][tempY] == 1 && !visited[tempX][tempY]) {
				visited[tempX][tempY] = true;
				q.push({ tempX, tempY });
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;

	cin >> t;
	while (t--) {
		int k, result = 0;
		int board[50][50] = { 0, };
		bool visited[50][50] = { false, };

		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			int x, y;

			cin >> x >> y;
			board[x][y] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == 1 && !visited[i][j]) {
					bfs(board, i, j, visited);
					result++;
				}
			}
		}
		cout << result << '\n';
	}
	return 0;
}