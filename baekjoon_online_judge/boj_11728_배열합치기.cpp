/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11728
 *
 */

#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

int main(void) {
	int N, M;
	cin >> N >> M;
	int *Q = new int[N + M];
	for (int i = 0; i < N; i++) {
		scanf("%d", &Q[i]);
	}
	for (int i = N; i < N + M; i++) {
		scanf("%d", &Q[i]);
	}
	sort(Q, Q + N + M);
	for (int i = 0; i < N + M; i++)
		printf("%d ", Q[i]);
	
	return 0;
}
