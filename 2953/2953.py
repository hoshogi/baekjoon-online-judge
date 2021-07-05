"""
Title   : BOJ_2953 [나는 요리사다]
Author  : Hoseok Lee
Date    : 2021/07/05

https://www.acmicpc.net/problem/2953
https://github.com/hoshogi
"""

max_score = 0
max_index = 0

for i in range(5):
    total_score = 0
    score = input().split()

    for j in range(4):
        total_score += int(score[j])

    if total_score > max_score:
        max_score = total_score
        max_index = i + 1

print("%d %d" % (max_index, max_score))