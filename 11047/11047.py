"""
Title   : BOJ_11047 [동전 0]
Author  : Hoseok Lee
Date    : 2022/01/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/11047
"""

n, k = map(int, input().split())
coin_types = []
count = 0

for _ in range(n):
    coin = int(input())
    coin_types.append(coin)

coin_types.reverse()

for coin in coin_types:
    count += k // coin
    k %= coin

print(count)