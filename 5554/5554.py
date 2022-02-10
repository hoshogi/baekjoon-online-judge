"""
Title   : BOJ_5554 [심부름 가는 길]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/5554
"""

import sys

total_minute = 0
for _ in range(4):
    minute = int(sys.stdin.readline())
    total_minute += minute

print(total_minute // 60)
print(total_minute % 60)