"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10768
 *
"""

a=input()
b=input()
s=a*100+b
if s>218:
    print 'After'
elif s<218:
    print 'Before'
else:
    print 'Special'
