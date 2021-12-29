"""
Title   : BOJ_16430 [제리와 톰]
Author  : Hoseok Lee
Date    : 2021/12/30
https://github.com/hoshogi
https://www.acmicpc.net/problem/16430
"""

nums = input()
num = nums.split()
print(str(int(num[1]) - int(num[0])) + ' ' + num[1])