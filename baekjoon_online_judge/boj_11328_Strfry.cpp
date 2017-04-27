/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-27
 * URL   : https://www.acmicpc.net/problem/11328
 *
 */

#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int left_arr[26] = {0, }, right_arr[26] = {0, };
        string left_str, right_str;

        cin >> left_str >> right_str;

        for (int j = 0; j < left_str.length(); j++)
            left_arr[left_str[j] - 'a']++;
        for (int j = 0; j < right_str.length(); j++)
            right_arr[right_str[j] - 'a']++;

        bool flag = true;

        for (int j = 0; j < 26; j++) {
            if (left_arr[j] != right_arr[j]) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
}
