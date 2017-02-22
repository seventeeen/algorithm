"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11050
 *
"""

arr=[[-1 for x in range(11)] for y in range(11)]
for i in range(11):
    arr[0][i]=0
for i in range(11):
    arr[i][0]=1
def com(n, k):
    if arr[n][k] == -1:
        arr[n][k]=com(n-1, k-1) + com(n-1, k)
    return arr[n][k]
s=raw_input().split(' ')
print com(int(s[0]), int(s[1]))
