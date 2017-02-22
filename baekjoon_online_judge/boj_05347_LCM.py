"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5347
 *
"""

def gcdd(m,n):
    if m < n:
        m, n = n, m
    if n == 0:
        return m
    if m % n == 0:
        return n
    else:
        return gcdd(n, m%n)

for i in range(input()):
    s = raw_input().split(' ')
    n=[]
    for k in range(len(s)):
        if s[k] != '':
            n.append(s[k])
    g = gcdd(int(n[0]), int(n[1]))
    print int(n[0]) * int(n[1]) / g
