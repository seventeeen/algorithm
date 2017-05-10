/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-05-10
 * URL   : https://www.acmicpc.net/problem/1284
 *
 */

#include <iostream>

using namespace std;

int main(void)
{
    while (true) {
        string s;
        cin >> s;
        if (s == "0")
            break;
        int result = 1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1')
                result += 3;
            else if (s[i] == '0')
                result += 5;
            else
                result += 4;
        }
        cout << result << "\n";
    }
    return 0;
}
