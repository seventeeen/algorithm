"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11023
 *
"""

result = 0
s = raw_input().split(' ')
if '' in s:
    s.remove('')
for j in range(len(s)):
    result+=int(s[j])
print result
