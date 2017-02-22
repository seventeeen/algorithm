"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3003
 *
"""

l = [1, 1, 2, 2, 2, 8]
k = raw_input().split(' ')
c = ''
for i in range(6):
    c += str(l[i]-int(k[i])) + ' '
print c
