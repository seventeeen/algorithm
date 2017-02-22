"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2720
 *
"""

for i in range(input()):
    s = input()
    k = [0, 0, 0, 0]
    while s >= 25:
        s -= 25
        k[0] += 1
    while s >= 10:
        s -= 10
        k[1] += 1
    while s >= 5:
        s -= 5
        k[2] += 1
    while s >= 1:
        s -= 1
        k[3] += 1
    result=''
    for j in range(4):
        result += str(k[j]) + ' '
    print result
