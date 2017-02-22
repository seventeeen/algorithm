"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1152
 *
"""
s=raw_input().split(' ')
k=0
cnt=len(s)
if s[0]=='':
    k+=1
if s[cnt-1]=='':
    if cnt!=1:
        k+=1
print cnt-k
