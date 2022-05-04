/*
Title   : BOJ_11724 [연결 요소의 개수]
Author  : Hoseok Lee
Date    : 2022/05/04
https://www.acmicpc.net/problem/11724
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<int> graph[1001], int start, bool visited[1001]) {
	queue<int> q;
	visited[start] = true;
	q.push(start);

	while (!q.empty()) {
		int now = q.front();
		q.pop();

		for (int i = 0; i < graph[now].size(); i++) {
			int temp = graph[now][i];

			if (!visited[temp]) {
				visited[temp] = true;
				q.push(temp);
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, result = 0;
	bool visited[1001] = { false, };
	vector<int> graph[1001];

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;

		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			bfs(graph, i, visited);
			result++;
		}
	}

	cout << result << '\n';
	return 0;
}