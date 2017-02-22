"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/6996
 *
"""

for test_case in range(input()):
    result = ''
    a = [0 for x in range(26)]
    b = [0 for x in range(26)]
    base = raw_input().split(' ')
    x = base[0].lower()
    y = base[1].lower()
    for i in range(len(x)):
        a[ord(x[i])-ord('a')] += 1
    for i in range(len(y)):
        b[ord(y[i])-ord('a')] += 1
    result += base[0] + ' & ' + base[1] + ' are '
    for i in range(26):
        if a[i] != b[i]:
            result += 'NOT '
            break
    result += 'anagrams.'
    print result
