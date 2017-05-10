/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-10
 * URL   : https://www.acmicpc.net/problem/2386
 *
 */

#include <iostream>

using namespace std;

int main(void)
{
    while (true) {
        string s;
        getline(cin, s);
        char c = s[0];
        int result = 0;

        if (c == '#')
            break;

        for (int i = 2; i < s.length(); i++) {
            if (c == tolower(s[i]))
                result++;
        }

        cout << c << " " << result << "\n";
    }
    return 0;
}
