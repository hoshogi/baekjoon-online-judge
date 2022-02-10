"""
Title   : BOJ_9085 [더하기]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/9085
"""

t = int(input())
for _ in range(t):
    n = int(input())
    nums = list(map(int, input().split()))
    print(sum(nums))