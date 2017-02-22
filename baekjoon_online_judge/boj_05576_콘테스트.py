"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5576
 *
"""

a=[]
b=[]
for i in range(10):
    a.append(input())
for i in range(10):
    b.append(input())
a.sort(reverse=True)
b.sort(reverse=True)
print str(a[0]+a[1]+a[2]) + ' ' + str(b[0]+b[1]+b[2])
