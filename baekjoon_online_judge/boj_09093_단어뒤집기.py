"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9093
 *
"""

for T in range(input()):
    base = raw_input().split(' ')
    result = ''
    for i in range(len(base)):
        result += base[i][::-1] + ' '
    print result
