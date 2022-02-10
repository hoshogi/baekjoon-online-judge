"""
Title   : BOJ_4101 [크냐?]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/4101
"""

while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    result = "Yes" if a > b else "No"
    print(result)