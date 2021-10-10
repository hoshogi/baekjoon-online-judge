"""
Title   : BOJ_1834 [나머지와 몫이 같은 수]
Author  : Hoseok Lee
Date    : 2021/10/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/1834
"""

sum = 0
n = int(input())

for i in range(n):
    sum += i * n + i

print(sum)