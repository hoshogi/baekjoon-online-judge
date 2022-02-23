"""
Title   : BOJ_2530 [인공지능 시계]
Author  : Hoseok Lee
Date    : 2022/02/23
https://github.com/hoshogi
https://www.acmicpc.net/problem/2530
"""

hour, min, sec = map(int, input().split())
time = int(input())

result_hour = time // 3600
result_min = (time % 3600) // 60
result_sec = time % 60

result_sec += sec
if result_sec >= 60:
    result_min += 1
    result_sec -= 60

result_min += min
if result_min >= 60:
    result_hour += 1
    result_min -= 60

result_hour += hour
result_hour %= 24

print(result_hour, result_min, result_sec)
