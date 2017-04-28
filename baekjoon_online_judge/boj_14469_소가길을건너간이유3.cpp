/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-28
 * URL   : https://www.acmicpc.net/problem/14469
 *
 */

#include <cstdio>
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct {
    int a;
    int b;
} data;

int compare(const void* x, const void* y)
{
    data *a = (data *)x;
    data *b = (data *)y;

    if (a->a != b->a)
        return a->a - b->a;
    else
        return a->b - b->b;
}

int main(void)
{
    int N, result = 0;
    data arr[100] = {0,};

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i].a >> arr[i].b;

    qsort(arr, N, sizeof(data), compare);

    result = arr[0].a + arr[0].b;
    for (int i = 1; i < N; i++) {
        if (result < arr[i].a)
            result = arr[i].a + arr[i].b;
        else
            result += arr[i].b;
    }

    cout << result;

    return 0;
}
