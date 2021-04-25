/*
Title   : BOJ_3053 [택시 기하학]
Author  : Hoseok Lee
Date    : 2021/04/25

https://www.acmicpc.net/problem/3053
https://github.com/hoshogi
*/

#include <iostream>
#define PI 3.14159265358979 // r이 10,000일때도 정밀하게 나올 수 있도록 pi값 설정
using namespace std;

int main(void)
{
    double r;
    
    cin >> r;
    
    printf("%.6lf \n", PI * r * r);
    printf("%.6lf \n", 2 * r * r);
    
    return 0;
}
