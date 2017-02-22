"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11809
 *
"""

a = raw_input()
b = raw_input()
judge=False
if len(a) < len(b):
    a, b = b, a
    judge=True
a = a[::-1]
b = b[::-1]
x=''
y=''
for i in range(len(b)):
    if a[i]>b[i]:
        x += a[i]
    elif a[i]<b[i]:
        y += b[i]
    else:
        x += a[i]
        y += b[i]
x += a[len(b):]
if not len(y):
    y+='YODA'
else:
    y=int(y[::-1])
if not len(x):
    x+='YODA'
else:
    x=int(x[::-1])
if judge:
    print y
    print x
else:
    print x
    print y

