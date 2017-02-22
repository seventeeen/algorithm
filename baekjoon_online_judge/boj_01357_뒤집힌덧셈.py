"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1357
 *
 """

s = raw_input().split(' ')
k=int(s[0][::-1])+int(s[1][::-1])
print int(str(k)[::-1])
