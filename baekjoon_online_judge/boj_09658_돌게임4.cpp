/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-10
 * URL   : https://www.acmicpc.net/problem/9658
 *
 */

#include <iostream>

using namespace std;

int main(void)
{
    int x;
    cin >> x;
    cout << ((x%7 == 1) || (x%7 == 3) ? "CY" : "SK");
}
