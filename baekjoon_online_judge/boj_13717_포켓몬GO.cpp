/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-29
 * URL   : https://www.acmicpc.net/problem/13717
 *
 */

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

typedef struct {
    char str[510];
    int cnt;
    int idx;
} data;

int compare(const void* x, const void* y)
{
    data *a = (data *)x;
    data *b = (data *)y;

    if (a->cnt != b->cnt)
        return b->cnt - a->cnt;
    else
        return a->idx - b->idx;
}

int main(void)
{
    int N, result = 0;
    cin >> N;
    data *arr = new data[N];

    for (int i = 0; i < N; i++) {
        arr[i].idx = i;
        int need, all, cnt = 0;
        cin >> arr[i].str >> need >> all;

        while (need <= all) {
            all -= need;
            all += 2;
            cnt++;
        }

        arr[i].cnt = cnt;
        result += cnt;
    }

    qsort(arr, N, sizeof(data), compare);


    cout << result << "\n" << arr[0].str;

    return 0;
}
