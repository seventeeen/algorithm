/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-10
 * URL   : https://www.acmicpc.net/problem/14471
 *
 */

#include <iostream>
#define VALID(X) X < 0 ? 0 : X

using namespace std;

int main(void)
{
    int N, M, sum = 0, max = -1;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        int k = VALID(N - x);
        if (k > max)
            max = k;
        sum += k;
    }
    cout << sum - max;
    return 0;
}
