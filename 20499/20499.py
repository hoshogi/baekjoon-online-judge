"""
Title   : BOJ_20499 [Darius님 한타 안 함?]
Author  : Hoseok Lee
Date    : 2022/03/07
https://github.com/hoshogi
https://www.acmicpc.net/problem/20499
"""

k, d, a = map(int, input().split('/'))

if k + a < d or d == 0:
    print("hasu")
else:
    print("gosu")