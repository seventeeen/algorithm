/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-29
 * URL   : https://www.acmicpc.net/problem/2668
 *
 */

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stack>

using namespace std;

int main(void)
{
    int N, cnt = 0;

    cin >> N;

    int *base = new int[N + 1];
    bool result[101] = {false, };

    for (int i = 1; i <= N; i++)
        cin >> base[i];

    for (int i = 1; i <= N; i++) {
        bool visited[101] = {false, };
        stack<int> container;
        container.push(i);
        visited[i] = true;
        int current = base[i];
        while (true) {
            if (visited[current]) {
                result[current] = true;
                while (container.top() != current) {
                    result[container.top()] = true;
                    container.pop();
                }
                break;
            }
            visited[current] = true;
            container.push(current);
            current = base[current];
        }
    }

    for (int i = 1; i <= N; i++) {
        if (result[i])
            cnt++;
    }
    cout << cnt << "\n";
    for (int i = 1; i <= N; i++) {
        if (result[i])
            cout << i << "\n";
    }

    return 0;
}
