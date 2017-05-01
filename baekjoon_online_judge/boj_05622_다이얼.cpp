/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-01
 * URL   : https://www.acmicpc.net/problem/5622
 *
 */

#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int to_num(char s)
{
    if (s <= 'C') return 2;
    else if (s <= 'F') return 3;
    else if (s <= 'I') return 4;
    else if (s <= 'L') return 5;
    else if (s <= 'O') return 6;
    else if (s <= 'S') return 7;
    else if (s <= 'V') return 8;
    else if (s <= 'Z') return 9;
    else return 0;
}

int main(void)
{
    string S;
    int result = 0;
    cin >> S;

    for (int i = 0; i < S.length(); i++)
        result += to_num(S.at(i)) + 1;

    cout << result;
}
