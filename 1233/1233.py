"""
Title   : BOJ_1233 [주사위]
Author  : Hoseok Lee
Date    : 2021/07/05

https://www.acmicpc.net/problem/1233
https://github.com/hoshogi
"""

s = [0 for i in range(3)]
s[0], s[1], s[2] = input().split()
total_sum = [0 for i in range(81)]
sum = 0

for i in range(int(s[0])):
    for j in range(int(s[1])):
        for k in range(int(s[2])):
            sum += i + j + k + 3
            total_sum[sum] += 1
            sum = 0

max_sum = max(total_sum)
max_index = total_sum.index(max_sum)
print(max_index)