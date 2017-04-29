/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-29
 * URL   : https://www.acmicpc.net/problem/9251
 *
 */

#include <cstdio>
#include <iostream>
#include <string>

#define MAX_SIZE 1000
#define BIG(A, B) A > B ? A : B

using namespace std;

int main(void)
{
    int arr[MAX_SIZE + 1][MAX_SIZE + 1] = {0, };
    string first, last;
    cin >> first >> last;
    int first_len = (int)first.length(), last_len = (int)last.length();

    for (int i = 1; i <= first_len; i++) {
        for (int j = 1; j <= last_len; j++) {
            if (last[j - 1] == first[i - 1]) {
                arr[i][j] = arr[i - 1][j - 1] + 1;
            }
            else {
                arr[i][j] = BIG(arr[i - 1][j], arr[i][j - 1]);
            }
        }
    }


    cout << arr[first_len][last_len];

    return 0;
}
