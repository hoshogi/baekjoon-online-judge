"""
Title   : BOJ_5596 [시험 점수]
Author  : Hoseok Lee
Date    : 2022/01/05
https://github.com/hoshogi
https://www.acmicpc.net/problem/5596
"""

sum = 0
total = []

nums = input()
num = nums.split()

for score in num:
    sum += int(score)
total.append(sum)
sum = 0

nums = input()
num = nums.split()

for score in num:
    sum += int(score)
total.append(sum)
print(max(total))