/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-10
 * URL   : https://www.acmicpc.net/problem/9659
 *
 */

#include <iostream>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int x = s[s.length()-1] - '0';
    cout << (x&1 ? "SK" : "CY");
}
