"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11091
 *
"""

for i in range(input()):
    s = raw_input().lower()
    result = ''
    k = [0 for x in range(26)]
    for j in range(len(s)):
        if s[j].isalpha():
            k[ord(s[j])-ord('a')] += 1
    for j in range(26):
        if not k[j]:
            result+=chr(j+ord('a'))
    if len(result):
        print 'missing ' + result
    else:
        print 'pangram'
