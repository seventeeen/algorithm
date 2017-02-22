"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11441
 *
"""

sum = 0
n = input()
sum_table=[0]
base = raw_input().split(' ')
for i in range(n):
    sum+=int(base[i])
    sum_table.append(sum)
for i in range(input()):
    k = raw_input().split(' ')
    print sum_table[int(k[1])]-sum_table[int(k[0])-1]
