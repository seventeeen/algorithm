"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5691
 *
"""

while True:
    a = raw_input().split(' ')
    if bool(a[0] == '0') & bool(a[1] == '0'):
        break
    print int(a[0])-(int(a[1])-int(a[0]))
