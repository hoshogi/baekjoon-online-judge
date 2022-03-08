"""
Title   : BOJ_13305 [주유소]
Author  : Hoseok Lee
Date    : 2022/03/08
https://github.com/hoshogi
https://www.acmicpc.net/problem/13305
"""

n = int(input())
distance = list(map(int, input().split()))
price = list(map(int, input().split()))

min_price = 1000000000
result = 0
for i in range(n - 1):
    if price[i] < min_price:
        min_price = price[i]
    result += distance[i] * min_price

print(result)