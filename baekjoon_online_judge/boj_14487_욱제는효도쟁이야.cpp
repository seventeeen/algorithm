/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-21
 * URL   : https://www.acmicpc.net/problem/14487
 *
 */

#include<cstdio>
#include<iostream>

using namespace std;

int main(void) {
    int T, max = -1, sum = 0;
    for (scanf("%d", &T); T--;) {
        int x;
        cin >> x;

        if (max < x) max = x;
        sum += x;
    }

    cout << sum - max;

    return 0;
}
