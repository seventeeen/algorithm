"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2846
 *
"""

n = input()
base = raw_input().split(' ')
temp = 0
max = -1
cnt = False
for i in range(1, n):
    if int(base[i])>int(base[i-1]):
        temp += int(base[i])-int(base[i-1])
        cnt = True
    else:
        temp = 0
    if max<temp:
        max = temp
if cnt:
    print max
else:
    print '0'
