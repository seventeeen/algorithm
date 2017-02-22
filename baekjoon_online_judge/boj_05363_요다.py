"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5363
 *
"""

n = input()
for i in range(n):
    s = raw_input().split(' ')
    s.append(s[0])
    s.append(s[1])
    s.pop(0)
    s.pop(0)
    result = ''
    for j in range(len(s)):
        result += s[j] + ' '
    print result
