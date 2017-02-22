"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10866
 *
"""

queue = []
 
n = input()
for i in range(n):
    s = raw_input().split(' ')
    size = len(queue)
    if s[0] == 'push_front':
        queue.insert(0, s[1])
    elif s[0] == 'push_back':
        queue.append(s[1])
    elif s[0] == 'pop_front':
        if size:
            print queue[0]
            queue.pop(0)
        else:
            print '-1'
    elif s[0] == 'pop_back':
        if size:
            print queue[size-1]
            queue.pop()
        else:
            print '-1'
    elif s[0] == 'size':
        print size
    elif s[0] == 'empty':
        if size:
            print '0'
        else:
            print '1'
    elif s[0] == 'front':
        if size:
            print queue[0]
        else:
            print '-1'
    elif s[0] == 'back':
        if size:
            print queue[size-1]
        else:
            print '-1'
