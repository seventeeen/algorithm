"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2161
 *
"""

a=[x for x in range(1, input()+1)]
s=''
while len(a)-1:
    s+=str(a[0])+' '
    a.pop(0)
    a.append(a[0])
    a.pop(0)
print s+str(a[0])
