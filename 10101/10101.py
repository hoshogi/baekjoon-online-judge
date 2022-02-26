"""
Title   : BOJ_10101 [삼각형 외우기]
Author  : Hoseok Lee
Date    : 2022/02/26
https://github.com/hoshogi
https://www.acmicpc.net/problem/10101
"""

angle = []
for _ in range(3):
    angle.append(int(input()))

result = ''
if angle[0] == 60 and angle[1] == 60 and angle[2] == 60:
    result = 'Equilateral'
elif sum(angle) == 180:
    if angle[0] == angle[1] or angle[1] == angle[2] or angle[2] == angle[0]:
        result = 'Isosceles'
    else:
        result = 'Scalene'
else:
    result = 'Error'

print(result)
