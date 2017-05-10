/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-10
 * URL   : https://www.acmicpc.net/problem/9660
 *
 */

#include <iostream>

using namespace std;

int main(void)
{
    unsigned long long int x;
    cin >> x;
    cout << ((x%7 == 0) || (x%7 == 2) ? "CY" : "SK");
}
