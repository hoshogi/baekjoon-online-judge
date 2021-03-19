/*
Title	: BOJ_2738 [행렬 덧셈]
Author	: Hoseok Lee
Date	: 2021/03/19

https://www.acmicpc.net/problem/2738
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	int matrix[2][100][100]; // 100 * 100 행렬 2개 선언

	cin >> n >> m;

	// 행렬 2개 입력 받기
	for (int i = 0;i < 2;i++)
		for (int j = 0;j < n;j++)
			for (int k = 0;k < m;k++)
				cin >> matrix[i][j][k];

	// 행렬 2개의 합 구하기
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
			cout << matrix[0][i][j] + matrix[1][i][j] << ' ';
		
		cout << '\n';
	}

	return 0;
}