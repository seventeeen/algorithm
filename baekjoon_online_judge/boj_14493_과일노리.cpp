/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-21
 * URL   : https://www.acmicpc.net/problem/14493
 *
 */

#include<cstdio>
#include<iostream>

using namespace std;

int main(void) {
    int N, result = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x, y, mod;

        scanf("%d %d", &x, &y);

        mod = result % (x + y);

        if (mod < y) result += y - mod + 1;
        else result++;
    }

    cout << result;

    return 0;
}
