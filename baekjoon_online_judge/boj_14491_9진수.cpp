/**
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-04-21
 * URL   : https://www.acmicpc.net/problem/14491
 *
 */

#include<cstdio>
#include<iostream>
#include<stack>

using namespace std;

int main(void) {
    int T;
    stack<int> R;
    cin >> T;
    
    while (T) {
        R.push(T % 9);
        T /= 9;
    }

    while (!R.empty()) {
        cout << R.top();
        R.pop();
    }

    return 0;
}
