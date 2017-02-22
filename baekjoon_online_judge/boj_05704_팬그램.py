"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5704
 *
"""

while True:
    a=raw_input()
    if a=='*':
        break
    b=[0 for x in range(26)]
    for x in range(len(a)):
        if a[x].islower():
            b[ord(a[x])-ord('a')]+=1
    c=True
    for x in range(26):
        if not b[x]:
            print 'N'
            c=False
            break
    if c:
        print 'Y'
