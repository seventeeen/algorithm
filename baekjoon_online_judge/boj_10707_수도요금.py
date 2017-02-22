"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10707
 *
"""

A = int(raw_input())
B_base = int(raw_input())
B_judge = int(raw_input())
B_extra = int(raw_input())
use = int(raw_input())
def small(a, b):
    if a < b:
        return a
    else:
        return b
if use > B_judge:
    c = (use - B_judge)*B_extra
else:
    c = 0
A_fee = A*use
B_fee = B_base+c
print small(A_fee, B_fee)
