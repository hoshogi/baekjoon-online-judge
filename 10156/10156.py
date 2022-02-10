"""
Title   : BOJ_10156 [과자]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/10156
"""

k, n, m = map(int, input().split())

if k * n > m:
    print (k * n - m)
else:
    print(0)