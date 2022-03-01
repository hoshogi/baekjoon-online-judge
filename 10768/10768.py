"""
Title   : BOJ_10768 [특별한 날]
Author  : Hoseok Lee
Date    : 2022/03/01
https://github.com/hoshogi
https://www.acmicpc.net/problem/10768
"""

month = int(input())
day = int(input())

if month < 2:
    print("Before")
elif month == 2:
    if day < 18:
        print("Before")
    elif day == 18:
        print("Special")
    else:
        print("After")
else:
    print("After")