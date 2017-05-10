/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-10
 * URL   : https://www.acmicpc.net/problem/13235
 *
 */

#include <iostream>

using namespace std;

int main(void)
{
    string flag = "true";
    string S;
    cin >> S;

    for (int i = 0; i < (S.length() >> 1); i++) {
        if (S[i] != S[S.length() - 1 - i]) {
            flag = "false";
            break;
        }
    }

    cout << flag;

    return 0;

}
