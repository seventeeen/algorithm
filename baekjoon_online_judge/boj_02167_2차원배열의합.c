/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2167
 *
 */

#include <stdio.h>
int main() {
	int i, j, x, y, N, M, K, arr[300][300] = { 0, };
	int a, b, sum;
	scanf("%d %d", &N, &M);
	for (a = 0; a < N; a++) {
		for (b = 0; b < M; b++)
			scanf("%d", &arr[a][b]);
	}
	for (scanf("%d", &K); K--;) {
		sum = 0;
		scanf("%d %d %d %d", &i, &j, &x, &y);
		for (a = i-1; a <= x-1; a++) {
			for (b = j - 1; b <= y - 1; b++)
				sum += arr[a][b];
		}
		printf("%d\n", sum);
	}
	return 0;
}
