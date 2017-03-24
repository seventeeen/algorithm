/*
 * About
 *
 * Author: seventeeen@GitHub (powdragon1@gmail.com)
 * Date  : 2017-03-24
 * URL   : https://www.acmicpc.net/problem/2839
 *
 */

#include <iostream>

using namespace std;

int main(void){
    int n, x, y, div, mod, result;
    cin >> n;

    div = n/5;
    mod = n%5;

    x = div;
    y = 0;

    switch(mod) {
        case 0:
            break;
        case 1:
            x -= 1;
            y += 2;
            break;
        case 2:
            x -= 2;
            y += 4;
            break;
        case 3:
            y += 1;
            break;
        case 4:
            x -= 1;
            y += 3;
            break;
        default:
            return 0;
    }

    if (x < 0 || y < 0)
        result = -1;
    else
        result = x + y;

    cout << result;

    return 0;
}
