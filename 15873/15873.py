"""
Title   : BOJ_15873 [공백 없는 A+B]
Author  : Hoseok Lee
Date    : 2021/07/08

https://www.acmicpc.net/problem/15873
https://github.com/hoshogi
"""

sum = 0
num = input()

for i in num:
    if i == '0':
        sum += 9
    else:
        sum += int(i)

print(sum)