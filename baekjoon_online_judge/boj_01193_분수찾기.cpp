/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-10
 * URL   : https://www.acmicpc.net/problem/1193
 *
 */

#include <iostream>

using namespace std;

int main(void)
{
    int X, sum = 0, cnt = 0, top, bottom;
    cin >> X;
    while (sum < X)
        sum += ++cnt;
    int k = sum - X;

    if (cnt&1) {
        bottom = cnt - k;
        top = cnt - bottom + 1;
    }
    else {
        top = cnt - k;
        bottom = cnt - top + 1;
    }
    cout << top << "/" << bottom;
    return 0;
}
