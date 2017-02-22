"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9325
 *
"""

for test_case in range(input()):
    base = input()
    result = base
    for case in range(input()):
        option = raw_input().split(' ')
        result += int(option[0])*int(option[1])
    print result
