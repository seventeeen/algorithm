/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-01
 * URL   : https://www.acmicpc.net/problem/2941
 *
 */

#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    string S;
    cin >> S;

    string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (int i = 0; i < 8; i++) {
        while (true) {
            if (S.find(arr[i]) > S.length())
                break;
            S.replace(S.find(arr[i]), arr[i].length(), "!");
        }
    }

    cout << S.length();
}
