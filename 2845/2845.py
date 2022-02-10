"""
Title   : BOJ_2845 [파티가 끝나고 난 뒤]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/2845
"""

l, p = map(int, input().split())
people = l * p

nums = list(map(int, input().split()))
for num in nums:
    print(num - people, end = ' ')