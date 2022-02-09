"""
Title   : BOJ_15964 [이상한 기호]
Author  : Hoseok Lee
Date    : 2022/02/09
https://github.com/hoshogi
https://www.acmicpc.net/problem/15964
"""

a, b = map(int, input().split())
result = (a + b) * (a - b)
print(result)