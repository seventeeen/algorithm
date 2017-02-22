"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2979
 *
"""

fee=raw_input().split(' ')
table=[0 for x in range(101)]
result=0
for i in range(3):
    a = raw_input().split(' ')
    for j in range(int(a[0]), int(a[1])):
        table[j]+=1
for i in range(101):
    if table[i]:
        result+=table[i]*int(fee[table[i]-1])
print result
