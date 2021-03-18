/*
Title	: BOJ_15596 [정수 N개의 합]
Author	: Hoseok Lee
Date	: 2021/03/18

https://www.acmicpc.net/problem/15596
https://github.com/hoshogi
*/

#include <vector>

long long sum(std::vector<int>& a) {
	long long ans = 0;

	for (int i = 0;i < a.size();i++)
		ans += a[i];
	return ans;
}