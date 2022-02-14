"""
Title   : BOJ_17256 [달달함이 넘쳐흘러]
Author  : Hoseok Lee
Date    : 2022/02/14
https://github.com/hoshogi
https://www.acmicpc.net/problem/17256
"""

a = list(map(int, input().split()))
c = list(map(int, input().split()))

print(c[0] - a[2], end=' ')
print(c[1] // a[1], end=' ')
print(c[2] - a[0])