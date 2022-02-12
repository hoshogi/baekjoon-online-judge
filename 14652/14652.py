"""
Title   : BOJ_14652 [나는 행복합니다~]
Author  : Hoseok Lee
Date    : 2022/02/12
https://github.com/hoshogi
https://www.acmicpc.net/problem/14652
"""

n, m, k = map(int, input().split())

print(k // m, end=' ')
print(k % m)