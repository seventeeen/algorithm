"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10829
 *
"""

a = int(raw_input())
s = ''
while a:
    s += str(a % 2)
    a >>= 1
print s[::-1]
