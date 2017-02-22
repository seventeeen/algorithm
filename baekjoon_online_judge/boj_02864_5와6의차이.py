"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2864
 *
"""

s = raw_input().split(' ')
a=s[0]
b=s[1]
result=''
for i in range(len(a)):
    if a[i] == '6':
        a = a[:i] + '5' + a[i+1:]
for i in range(len(b)):
    if b[i] == '6':
        b = b[:i]+'5'+b[i+1:]
result += str(int(a) + int(b)) + ' '
for i in range(len(a)):
    if a[i] == '5':
        a = a[:i] + '6' + a[i+1:]
for i in range(len(b)):
    if b[i] == '5':
        b = b[:i]+'6'+b[i+1:]
result += str(int(a) + int(b))
print result
