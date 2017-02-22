"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2998
 *
"""

base='0b'
base += raw_input()
new = eval(base)
new = oct(new)
result=''
if new[len(new)-1]=='L':
    k=len(new)-1
else:
    k=len(new)
for i in range(1, k):
    result += new[i]
print result
