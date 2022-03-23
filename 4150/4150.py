"""
Title   : BOJ_4150 [피보나치 수]
Author  : Hoseok Lee
Date    : 2022/03/23
https://github.com/hoshogi
https://www.acmicpc.net/problem/4150
"""

import sys
input = sys.stdin.readline

count = int(input())
result = 1
temp = 0

for _ in range(count - 1):
    result, temp = result + temp, result

print(result)