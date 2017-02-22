"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3040
 *
"""

base = []
whole = 0
for i in range(9):
    base.append(input())
    whole += base[i]
for i in range(9):
    for j in range(i+1, 9):
        if base[i]+base[j] == whole - 100:
            base.pop(j)
            base.pop(i)
            break
    if len(base)<9:
        break
for i in range(7):
    print base[i]
