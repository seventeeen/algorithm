/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-25
 * URL   : https://www.acmicpc.net/problem/2083
 *
 */

#include<cstdio>
#include<iostream>

using namespace std;

int main(void) {
    string name;
    int x, y;

    while(true) {
        cin >> name >> x >> y;
        if (name == "#" && x == 0 && y == 0)
            break;

        cout << name << " ";

        if (x > 17 || y >= 80)
            cout << "Senior\n";
        else
            cout << "Junior\n";
    }

    return 0;
}
