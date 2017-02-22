"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10826
 *
"""

a = int(raw_input())
fib = [0, 1]
for i in range(2, a+1):
    fib.append(fib[i-1]+fib[i-2])
print fib[a]
