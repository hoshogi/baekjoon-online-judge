"""
Title   : BOJ_3003 [킹, 퀸, 룩, 비숍, 나이트, 폰]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/3003
"""

answer = [1, 1, 2, 2, 2, 8]
nums = list(map(int, input().split()))

for i in range(len(answer)):
    print(answer[i] - nums[i], end=' ')