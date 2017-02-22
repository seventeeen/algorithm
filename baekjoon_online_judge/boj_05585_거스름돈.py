"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5585
 *
"""

a = input()
a = 1000-a
cnt=0
while a:
    if a>=500:
        a-=500
        cnt+=1
    elif a>=100:
        a-=100
        cnt+=1
    elif a>=50:
        a-=50
        cnt+=1
    elif a>=10:
        a-=10
        cnt+=1
    elif a>=5:
        a-=5
        cnt+=1
    else:
        a-=1
        cnt+=1
print cnt
