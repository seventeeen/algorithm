"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1735
 *
"""

def gcd(a, b):
    while b:
        t = a % b
        (a, b) = (b, t)
    return abs(a)
fst = raw_input().split(' ')
snd = raw_input().split(' ')
a = int(fst[0])
b = int(fst[1])
x = int(snd[0])
y = int(snd[1])
temp = gcd(a, b)
a /= temp
b /= temp
temp = gcd(x, y)
x /= temp
y /= temp
lsm = (b * y) / gcd(b, y)
top = (a * (lsm / b)) + (x * (lsm / y))
bot = lsm
temp = gcd(top, bot)
print str(top/temp) + ' ' + str(bot/temp)
