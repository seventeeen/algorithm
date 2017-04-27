/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-27
 * URL   : https://www.acmicpc.net/problem/12174
 *
 */

#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

char to_num(string s)
{
    char c = 0;
    for (int i = 0; i < 8 ; i++) {
        if (s.at(i) == 'I')
            c += pow(2, 7 - i);
    }

    return c;
}

int main(void)
{
    int t;
    cin >> t;


    for (int i = 1; i <= t; i++) {
        int n;
        string s;
        cin >> n >> s;
        cout << "Case #" << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << to_num(s.substr(j * 8, 8));
        }
        cout << "\n";
    }

}
