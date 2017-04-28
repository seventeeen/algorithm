/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-28
 * URL   : https://www.acmicpc.net/problem/1110
 *
 */

#include<cstdio>
#include<iostream>

using namespace std;

int main(void)
{
    int N, cnt = 0;
    cin >> N;
    int changed = N;

    while(true) {
        cnt++;
        changed = (changed % 10) * 10 + (changed / 10 + changed % 10) % 10;

        if (N == changed)
            break;
    }

    cout << cnt;

    return 0;
}
