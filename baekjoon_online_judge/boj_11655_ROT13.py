"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11655
 *
"""

s = raw_input()
c=''
for i in range(len(s)):
    if s[i].isupper():
        if ord(s[i])-ord('A')<13:
            c += chr(ord(s[i])+13)
        else:
            c += chr(ord(s[i])-13)
    elif s[i].islower():
        if ord(s[i])-ord('a')<13:
            c += chr(ord(s[i])+13)
        else:
            c += chr(ord(s[i])-13)
    else:
        c += s[i]
print c
