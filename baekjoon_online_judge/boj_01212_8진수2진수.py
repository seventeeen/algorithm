"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1212
 *
"""

base='0o'
base += raw_input()
new = eval(base)
new = str(bin(new))
result=''
for i in range(2, len(new)):
    result += new[i]
print result
