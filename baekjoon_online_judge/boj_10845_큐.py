"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10845
 *
"""

queue = []

n = input()
for i in range(n):
    s = raw_input().split(' ')
    if s[0] == 'push':
        queue.append(int(s[1]))
    elif s[0] == 'pop':
        if len(queue):
            print queue[0]
            queue.pop(0)
        else:
            print '-1'
    elif s[0] == 'size':
        print len(queue)
    elif s[0] == 'empty':
        if len(queue):
            print '0'
        else:
            print '1'
    elif s[0] == 'front':
        if len(queue):
            print queue[0]
        else:
            print '-1'
    elif s[0] == 'back':
        if len(queue):
            print queue[len(queue)-1]
        else:
            print '-1'
