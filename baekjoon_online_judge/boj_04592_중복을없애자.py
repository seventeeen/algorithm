"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4592
 *
"""

while True:
    k=''
    s = raw_input().split(' ')
    if not int(s[0]):
        break
    k += s[1] + ' '
    for i in range(2, int(s[0])+1):
        if s[i] != s[i-1]:
            k += s[i] + ' '
    print k + '$'
