/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/13164
 *
 */

#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main(void) {
	int N, K;
	priority_queue<int> Q;
	int prev, temp;
	cin >> N >> K >> prev;
	for (int i = 0; i < N-1; i++) {
		cin >> temp;
		Q.push(temp-prev);
		prev = temp;
	}
	int cnt = K-1;
	for (int i = 0; i < cnt; i++)
		Q.pop();
	int result = 0;
	while (Q.size()) {
		result += Q.top();
		Q.pop();
	}
	cout << result;
	return 0;
}
