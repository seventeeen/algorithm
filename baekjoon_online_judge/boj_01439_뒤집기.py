"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1439
 *
"""

s=raw_input()
x=s[0]
a=0
b=0
if x=='0':
    a+=1
else:
    b+=1
for i in range(1, len(s)):
    if s[i]!=x:
        if s[i]=='0':
            a+=1
        else:
            b+=1
        x=s[i]
if a<b:
    print a
else:
    print b
