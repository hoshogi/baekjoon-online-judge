"""
Title   : BOJ_2914 [저작권]
Author  : Hoseok Lee
Date    : 2022/01/04
https://github.com/hoshogi
https://www.acmicpc.net/problem/2914
"""

nums = input()
num = nums.split()
print(int(num[0]) * (int(num[1]) - 1) + 1)