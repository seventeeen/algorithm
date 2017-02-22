"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2438
 *
"""

n = input()

for i in range(n):
    s=""
    for j in range(i+1):
        s+='*'
    print s
