/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1236
 *
 */

#include <iostream>
#include <cstdio>


using namespace std;

#define BIG(a, b) (a > b ? a : b)

int main(void) {
	int N, M;
	char x;
	int row[50] = { 0, }, col[50] = { 0, };
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> x;
			if (x == 'X') {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	int R = 0, C = 0;
	for (int i = 0; i < N; i++) {
		if (row[i] == 0)
			R++;
	}
	for (int i = 0; i < M; i++) {
		if (col[i] == 0)
			C++;
	}
	cout << BIG(R, C);
	return 0;
}
