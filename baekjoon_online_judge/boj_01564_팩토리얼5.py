"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1564
 *
"""

n=input()
result=1
for i in range(1, n+1):
    result*=i
    if not i%5:
        k=i/5
        cnt=1
        while not k%5:
            k/=5
            cnt+=1
        result/=10**cnt
    result %= 10000000
result %= 100000
k=''
s=str(result)
for i in range(5-len(s)):
    k+='0'
print k+s
