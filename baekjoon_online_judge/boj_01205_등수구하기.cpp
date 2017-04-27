/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-26
 * URL   : https://www.acmicpc.net/problem/1205
 *
 */

#include<cstdio>
#include<iostream>

using namespace std;

int main(void)
{
    int N, song, P, latest_score = -1, current_rank = 1, latest_rank = 0, current_index = 0;
    bool flag = true;

    cin >> N >> song >> P;

    for (int i = 1; i <= N; i++) {
        int score;
        cin >> score;

        current_index = i;

        if (score != latest_score) {
            current_rank = i;
        }

        if (score < song) {
            if (latest_score == song) {
                current_rank = latest_rank;
            }
            flag = false;
            break;
        }

        latest_rank = current_rank;
        latest_score = score;
    }

    if (flag) {
        current_index++;
        if (latest_score != song) {
            current_rank = current_index;
        }
    }


    if (current_index > P)
        cout << "-1";
    else
        cout << current_rank;

    return 0;
}
