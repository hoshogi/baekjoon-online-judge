"""
Title   : BOJ_5532 [방학 숙제]
Author  : Hoseok Lee
Date    : 2022/02/25
https://github.com/hoshogi
https://www.acmicpc.net/problem/5532
"""

import math

num = []
for i in range(5):
    num.append(int(input()))

result = num[0] - max(math.ceil(num[1] / num[3]), math.ceil(num[2] / num[4]))
print(result)