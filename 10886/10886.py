"""
Title   : BOJ_10886 [0 = not cute / 1 = cute]
Author  : Hoseok Lee
Date    : 2021/12/27
https://github.com/hoshogi
https://www.acmicpc.net/problem/10886
"""

n = input()

count_x = 0
count_y = 0

for i in range(int(n)):
    num = input()
    if num == '0':
        count_x += 1
    elif num == '1':
        count_y += 1

if count_x > count_y:
    print("Junhee is not cute!")
else:
    print("Junhee is cute!")
