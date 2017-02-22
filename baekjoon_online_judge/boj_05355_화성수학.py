"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5355
 *
"""

n = input()
for i in range(n):
    s = raw_input().split(' ')
    k = float(s[0])
    for j in range(1, len(s)):
        if s[j] == '@':
            k *= 3
        elif s[j] == '%':
            k += 5
        else:
            k -= 7
    result = str(round(k, 2))
    for j in range(len(result)):
        if result[j]=='.':
            l = j
    for j in range(3-(len(result)-l)):
        result += '0'
    print result
