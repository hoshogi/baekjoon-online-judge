"""
Title   : BOJ_3004 [체스판 조각]
Author  : Hoseok Lee
Date    : 2022/03/04
https://github.com/hoshogi
https://www.acmicpc.net/problem/3004
"""

n = int(input())
result = 0
if n == 1:
    result = 2
elif n % 2 == 0:
    result = (n // 2 + 1) ** 2
else:
    result = (n // 2 + 1) ** 2 + n // 2 + 1
print(result)