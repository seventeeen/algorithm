"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2693
 *
"""

for i in range(input()):
    s = raw_input().split(' ')
    if '' in s:
        s.remove('')
    s.sort(key=int, reverse=True)
    print s[2]
