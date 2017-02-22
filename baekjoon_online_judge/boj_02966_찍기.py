"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2966
 *
"""

check_x = ['A', 'B', 'C']
check_y = ['B', 'A', 'B', 'C']
check_z = ['C', 'C', 'A', 'A', 'B', 'B']
count = [0, 0, 0]
k = input()
base = raw_input()
for i in range(k):
    if base[i] == check_x[i % 3]:
        count[0] += 1
    if base[i] == check_y[i % 4]:
        count[1] += 1
    if base[i] == check_z[i % 6]:
        count[2] += 1
max = -1
for i in range(3):
    if count[i] > max:
        max = count[i]
print max
if count[0] == max:
    print 'Adrian'
if count[1] == max:
    print 'Bruno'
if count[2] == max:
    print 'Goran'
