"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2963
 *
"""

s = raw_input()
result = 1
k = 0
for i in s:
    if i == 'L':
        result <<= 1
    elif i == 'R':
        result <<= 1
        result += pow(3, k)
    elif i == '*':
        result = result*5 + pow(3, k)
        k += 1
print result
