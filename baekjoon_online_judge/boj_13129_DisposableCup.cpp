/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/13129
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int A, B, N;
	cin >> A >> B >> N;
	int base = A*N;
	for (int i = 1; i <= N; i++)
		printf("%d ", base + i*B);

	return 0;
}
