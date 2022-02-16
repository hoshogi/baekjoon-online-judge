"""
Title   : BOJ_17496 [스타후르츠]
Author  : Hoseok Lee
Date    : 2022/02/16
https://github.com/hoshogi
https://www.acmicpc.net/problem/17496
"""

n, t, c, p = map(int, input().split())

result = (n - 1) // t * c * p
print(result)