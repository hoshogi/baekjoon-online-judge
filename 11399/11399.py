"""
Title   : BOJ_11399 [ATM]
Author  : Hoseok Lee
Date    : 2022/01/11
https://github.com/hoshogi
https://www.acmicpc.net/problem/11399
"""

n = int(input())
p = list(map(int, input().split()))

result = 0
waiting_time = 0
p.sort()

for i in p:
    waiting_time += i
    result += waiting_time

print(result)