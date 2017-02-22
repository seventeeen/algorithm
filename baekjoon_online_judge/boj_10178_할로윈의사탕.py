"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10178
 *
"""

for T in range(input()):
    s = raw_input().split(' ')
    print 'You get ' + str(int(s[0])/int(s[1])) + ' piece(s) and your dad gets ' + str(int(s[0])%int(s[1])) + ' piece(s).'
