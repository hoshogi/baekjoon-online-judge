"""
Title   : BOJ_5522 [카드 게임]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/5522
"""

import sys

total_score = 0
for _ in range(5):
    score = int(sys.stdin.readline())
    total_score += score

print(total_score)