"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1157
 *
"""

base = raw_input().upper()
check = [0 for x in range(26)]
for i in range(len(base)):
    check[ord(base[i])-ord('A')] += 1
max = -1
for i in range(26):
    if check[i] > max:
        max = check[i]
        result = i
cnt = -1
for i in range(26):
    if check[i] == max:
        cnt += 1
if cnt:
    print '?'
else:
    print chr(result+ord('A'))
