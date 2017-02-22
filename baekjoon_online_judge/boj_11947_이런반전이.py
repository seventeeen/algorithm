"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11947
 *
"""

T = raw_input()
for i in range(0, int(T)):
    a = raw_input()
    b = (10**len(a)) >> 1
    c = ''
    if int(a) >= b-1:
        print b*(b-1)
    else:
        for i in a:
            c += str(9-int(i))
        print int(a)*int(c)
