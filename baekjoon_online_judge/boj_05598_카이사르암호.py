"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5598
 *
"""

s=raw_input()
x=''
for i in range(len(s)):
    if ord(s[i])-ord('A')<3:
        x+=chr(ord(s[i])+23)
    else:
        x+=chr(ord(s[i])-3)
print x
