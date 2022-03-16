"""
Title   : BOJ_15624 [피보나치 수 7]
Author  : Hoseok Lee
Date    : 2022/03/16
https://github.com/hoshogi
https://www.acmicpc.net/problem/15624
"""

import sys
input = sys.stdin.readline

n = int(input())
fibonacci = [0] * (n + 1)

for i in range(n + 1):
    if i == 0:
        fibonacci[i] = 0
    elif i == 1:
        fibonacci[i] = 1
    else:
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]
        fibonacci[i] %= 1000000007

print(fibonacci[n])