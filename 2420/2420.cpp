/*
Title	: BOJ_2420 [사파리월드]
Author	: Hoseok Lee
Date	: 2021/03/03

https://www.acmicpc.net/problem/2420
https://github.com/hoshogi
*/

#include <iostream>
#include <cstdlib>
using namespace std;

/*
int 타입의 정수 절대값 함수(abs)의 오버로딩은 <cstdlib>에 존재
float, double 타입의 실수 절대값 함수(abs)의 오버로딩은 <cmath>에 존재
*/
int main(void)
{
	long long n, m;

	cin >> n >> m;
	cout << llabs(n - m) << '\n'; // llabs(): long long 정수 피연산자의 절대값을 리턴

	return 0;
}