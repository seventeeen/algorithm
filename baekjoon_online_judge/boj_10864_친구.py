"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10864
 *
"""

k = raw_input().split(' ')
n = int(k[0])+1
m = int(k[1])
s = []
d = [0 for x in range(n)]
for i in range(n):
    s.append([0 for x in range(n)])
for i in range(m):
    num = raw_input().split(' ')
    s[int(num[0])][int(num[1])] = 1
    s[int(num[1])][int(num[0])] = 1
for i in range(1, n):
    for k in range(1, n):
        if s[i][k]:
            d[i] += 1
    print d[i]
