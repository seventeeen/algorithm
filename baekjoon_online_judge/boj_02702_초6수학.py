"""
 * about
 *
 * author: seventeeen@github <powdragon1@gmail.com>
 * date  : 2017-02-21
 * url   : https://www.acmicpc.net/problem/2702
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
    print str(int(n[0]) * int(n[1]) / g) + ' ' + str(g)
