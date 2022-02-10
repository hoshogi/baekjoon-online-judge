"""
Title   : BOJ_1271 [엄청난 부자2]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/1271
"""

import sys

money, people = map(int, sys.stdin.readline().split())

print(money // people)
print(money % people)