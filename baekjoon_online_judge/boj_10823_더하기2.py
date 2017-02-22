"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10823
 *
"""

c=''
try:
    while True:
        a = raw_input()
        c += a

except:
    pass
k = c.split(',')
sum = 0
length = len(k)
for i in range(length):
    sum += int(k[i])
print sum
