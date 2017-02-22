"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1252
 *
"""

base = raw_input().split(' ')
a='0b'+base[0]
b='0b'+base[1]
a=eval(a)
b=eval(b)
result = bin(a+b)
print result[2:]
