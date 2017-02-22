"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3028
 *
"""

a=raw_input()
b=[1,0,0]
for x in range(len(a)):
    if a[x]=='A':
        b[0], b[1] = b[1], b[0]
    elif a[x]=='B':
        b[1], b[2] = b[2], b[1]
    else:
        b[0], b[2] = b[2], b[0]
for x in range(3):
    if b[x]:
        print x+1
        break

