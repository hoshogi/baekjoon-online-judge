"""
Title   : BOJ_1748 [수 이어 쓰기 1]
Author  : Hoseok Lee
Date    : 2022/01/17
https://github.com/hoshogi
https://www.acmicpc.net/problem/1748
"""

num = input()
result = 0

for i in range(len(num) - 1):
    result += 9 * (10 ** i) * (i + 1)

result += (int(num) - 10 ** (len(num) - 1) + 1) * len(num)
print(result)