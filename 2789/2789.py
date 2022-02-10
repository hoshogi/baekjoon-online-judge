"""
Title   : BOJ_2789 [유학 금지]
Author  : Hoseok Lee
Date    : 2022/02/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/2789
"""

email = input()
word = list(email)
remove_set = {'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'}
result = [i for i in word if i not in remove_set]

for i in result:
    print(i, end='')