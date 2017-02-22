"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9625
 *
"""

arr = [-1 for _ in range(50)]
arr[0] = 0
arr[1] = 1
def fib(k):
    if arr[k] == -1:
        arr[k] = fib(k-1) + fib(k-2)
    return arr[k]
n = int(raw_input())
print str(fib(n-1)) + ' ' + str(fib(n))
