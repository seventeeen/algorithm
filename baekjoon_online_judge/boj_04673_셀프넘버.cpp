/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-01
 * URL   : https://www.acmicpc.net/problem/4673
 *
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main(void)
{
    bool result[10100] = {false, };

    for (int i = 1; i <= 10000; i++) {
        int sum = i, val = i;
        while (val) {
            sum += val % 10;
            val /= 10;
        }
        result[sum] = true;
    }

    for (int i = 1; i <= 10000; i++) {
        if (!result[i])
            printf("%d\n", i);
    }
    return 0;
}
