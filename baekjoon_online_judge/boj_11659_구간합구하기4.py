"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11659
 *
"""

sum = 0
key = 0
n = raw_input().split(' ')
sum_table=[0]
base = raw_input().split(' ')
for i in range(int(n[1])):
    k = raw_input().split(' ')
    if key<int(k[1]):
        for j in range(key, int(k[1])):
            sum+=int(base[j])
            sum_table.append(sum)
            key+=1
    print sum_table[int(k[1])]-sum_table[int(k[0])-1]
