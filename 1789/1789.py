"""
Title   : BOJ_1789 [수들의 합]
Author  : Hoseok Lee
Date    : 2022/01/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/1789
"""

s = int(input())

compare_num = 0
add_num = 0

while True:
    if compare_num >= s:
        if compare_num > s:
            add_num -= 1
        break
    add_num += 1
    compare_num += add_num

print(add_num)