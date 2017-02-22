"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2407
 *
"""

s=1
k=1
base=raw_input().split(' ')
for i in range(int(base[0]), int(base[0])-int(base[1]), -1):
    s*=i
for i in range(1, int(base[1])+1):
    k*=i
print s/k
