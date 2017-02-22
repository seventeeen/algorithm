"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/7572
 *
"""

table = []
fst=['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L']
snd=['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

for i in range(60):
    table.append(fst[i % 12]+snd[i % 10])
base=input()
print table[(base+56) % 60]
