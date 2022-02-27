"""
Title   : BOJ_11943 [파일 옮기기]
Author  : Hoseok Lee
Date    : 2022/02/27
https://github.com/hoshogi
https://www.acmicpc.net/problem/11943
"""

a, b = map(int, input().split())
c, d = map(int, input().split())

result = min(a + d, b + c)
print(result)