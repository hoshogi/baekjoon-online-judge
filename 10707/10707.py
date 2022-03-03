"""
Title   : BOJ_10707 [수도요금]
Author  : Hoseok Lee
Date    : 2022/03/03
https://github.com/hoshogi
https://www.acmicpc.net/problem/10707
"""

num = []
for _ in range(5):
    num.append(int(input()))

x = num[0] * num[4]
y = num[1]
if num[2] < num[4]:
    y += num[3] * (num[4] - num[2])

print(min(x, y))