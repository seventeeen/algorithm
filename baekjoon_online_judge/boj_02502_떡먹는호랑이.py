"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2502
 *
"""

arr=[-1 for x in range(31)]
arr[0]=1
arr[1]=0
def fib(n):
    if arr[n]==-1:
        arr[n] = fib(n-1) + fib(n-2)
    return arr[n]
s = raw_input().split(' ')
a = fib(int(s[0]) - 1)
b = fib(int(s[0]))
ds=int(s[1])
x=1
y=1
result=[0, 0]
while True:
    if a*x + b*y == ds:
        result[0]=x
        result[1]=y
        break
    elif a*x + b*y > ds:
        x+=1
        y=x
    else:
        y+=1
print result[0]
print result[1]

