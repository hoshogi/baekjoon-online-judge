"""
Title   : BOJ_11948 [과목선택]
Author  : Hoseok Lee
Date    : 2021/07/03

https://www.acmicpc.net/problem/11948
https://github.com/hoshogi
"""

sum = 0
scoreList = []

for i in range(4):
    scoreList.append(int(input()))

scoreList.sort()
del scoreList[0]
for score in scoreList:
    sum += score

scoreList.clear()
for i in range(2):
    scoreList.append(int(input()))

scoreList.sort()
del scoreList[0]

for score in scoreList:
    sum += score

print(sum)