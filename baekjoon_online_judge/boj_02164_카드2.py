"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2164
 *
"""

a=input()
k=0
while True:
    if 2**k>=a:
        s=2**k
        break
    k+=1
print s-(s-a)*2
