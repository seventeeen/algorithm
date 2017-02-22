"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10822
 *
"""

a = raw_input().split(',')
result = 0
length = len(a)
for i in range(0, length):
    result += int(a[i])
print result
