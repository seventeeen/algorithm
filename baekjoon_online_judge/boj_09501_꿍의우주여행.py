"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9501
 *
"""

for i in range(input()):
    s = raw_input().split(' ')
    cnt=0
    for k in range(int(s[0])):
        p = raw_input().split(' ')
        if float(s[1])<=float(p[0])*(float(p[1])/float(p[2])):
            cnt += 1
    print cnt
