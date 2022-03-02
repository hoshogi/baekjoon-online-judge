"""
Title   : BOJ_5575 [타임 카드]
Author  : Hoseok Lee
Date    : 2022/03/02
https://github.com/hoshogi
https://www.acmicpc.net/problem/5575
"""

for _ in range(3):
    time = list(map(int, input().split()))
    sec = time[5] - time[2]
    if sec < 0:
        sec += 60
        time[4] -= 1

    min = time[4] - time[1]
    if min < 0:
        min += 60
        time[3] -= 1

    hour = time[3] - time[0]
    print(hour, min, sec)