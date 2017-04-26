/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-26
 * URL   : https://www.acmicpc.net/problem/14467
 *
 */

#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main(void) {
    int N, result = 0;
    int pos_arr[11], result_arr[11] = {0,};
    memset(pos_arr, -1, sizeof(int)*11);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int num, pos;
        cin >> num >> pos;

        if (pos_arr[num] == -1)
            pos_arr[num] = pos;
        else if (pos_arr[num] != pos) {
            pos_arr[num] = pos;
            result_arr[num]++;
        }
    }
    for (int i = 1; i <= 10; i++) {
        if (result_arr[i] > 0) {
            result += result_arr[i];
        }
    }

    cout << result;
    return 0;
}
