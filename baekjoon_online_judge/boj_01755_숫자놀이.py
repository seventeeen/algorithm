"""
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1755
 *
"""

check = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
table = []
base = raw_input().split(' ')
for i in range(int(base[0]), int(base[1])+1):
    temp = ''
    k = str(i)
    for j in range(len(k)):
        temp += check[int(k[j])]
    table.append({'str': temp, 'num': i})
table.sort(key = lambda k : k['str'])
temp=''
cnt=0
result=[]
for i in range(len(table)):
    temp += str(table[i]['num']) + ' '
    cnt+=1
    if cnt==10:
        result.append(temp)
        temp=''
        cnt=0
if temp!='':
    result.append(temp)
for i in range(len(result)):
    print result[i]
