"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/8949
 *
"""

def big(x, y):
    if len(x)>len(y):
        return x
    else:
        return y
def small(x, y):
    if len(x) <= len(y):
        return x
    else:
        return y
s = raw_input().split(' ')

a = big(s[0], s[1])
b = small(s[0], s[1])

a = a[::-1]
b = b[::-1]
k=''
for i in range(len(b)):
    k += str(int(a[i])+int(b[i]))[::-1]
for i in range(len(b), len(a)):
    k += a[i]
print k[::-1]
