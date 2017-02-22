"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10820
 *
"""

try:
    while True:
        a = raw_input()
        length = len(a)
        u = l = d = s = 0
        for i in range(length):
            if a[i].isupper():
                u += 1
            elif a[i].islower():
                l += 1
            elif a[i].isdigit():
                d += 1
            else:
                s += 1
        print str(l) + ' ' + str(u) + ' ' + str(d) + ' ' + str(s)
except:
    pass
