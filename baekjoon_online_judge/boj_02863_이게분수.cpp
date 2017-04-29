/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-29
 * URL   : https://www.acmicpc.net/problem/2863
 *
 */

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    vector<double> result;
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    result.push_back(a/c + b/d);
    result.push_back(c/d + a/b);
    result.push_back(d/b + c/a);
    result.push_back(b/a + d/c);
    double max = -1;
    for (int i = 0; i < 4; i++) {
        if (result[i] > max)
            max = result[i];
    }

    for (int i = 0; i < 4; i++) {
        if (result[i] == max)
            cout << i;
    }


    return 0;
}
