"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11179
 *
"""

s=bin(input())
l='0b'
for i in range(len(s)-1, 1, -1):
   l+=s[i]
print eval(l)
