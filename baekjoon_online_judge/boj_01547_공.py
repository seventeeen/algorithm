"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1547
 *
"""

key = '1'
for i in range(input()):
    s = raw_input().split(' ')
    if s[0]==key:
        key=s[1]
    elif s[1]==key:
        key=s[0]
print key
