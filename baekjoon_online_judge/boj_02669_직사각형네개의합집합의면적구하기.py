"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2669
 *
"""

a=[[0 for i in range(100)] for j in range(100)]
cnt=0
for k in range(4):
    s = raw_input().split(' ')
    for i in range(int(s[0]), int(s[2])):
        for j in range(int(s[1]), int(s[3])):
            a[i][j]+=1
for i in range(100):
    for j in range(100):
        if a[i][j]:
            cnt+=1
print cnt
