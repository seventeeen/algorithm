"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1225
 *
"""

k = raw_input().split(' ')
a = len(k[0])
b = len(k[1])
result=0
p=0
for i in range(a):
   p += int(k[0][i])
for i in range(b):
    result+=int(k[1][i])*p
print result
