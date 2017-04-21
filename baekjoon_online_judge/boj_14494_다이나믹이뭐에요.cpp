/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-21
 * URL   : https://www.acmicpc.net/problem/14494
 *
 */

#include<cstdio>
#include<iostream>

#define MOD 1000000007

using namespace std;

long long int check[1000][1000];

long long int dp (int x, int y) {
    if (!check[x][y])
        check[x][y] = dp(x-1, y-1) + dp(x-1, y) + dp(x, y-1);

    return check[x][y] % MOD;
}

int main(void) {
    for (int i = 0; i < 1000; i++)
        check[i][0] = check[0][i] = 1;

    int X, Y;
    cin >> X >> Y;

    cout << dp(--X, --Y);

    return 0;
}
