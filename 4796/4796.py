"""
Title   : BOJ_4796 [캠핑]
Author  : Hoseok Lee
Date    : 2022/03/08
https://github.com/hoshogi
https://www.acmicpc.net/problem/4796
"""

count = 0
while True:
    l, p, v = map(int, input().split())
    if l == 0 and p == 0 and v == 0:
        break
    count += 1
    result = v // p * l
    result += min(l, v % p)
    print(f"Case {count}: {result}")