/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10810
 *
 */

#include<stdio.h>

int main(void) {
	int N, M, i, j, x, y, k, arr[101] = { 0, };
	scanf("%d %d", &N, &M);
	for (i = 0; i < M; i++) {
		scanf("%d %d %d", &x, &y, &k);
		for (j = x; j <= y; j++)
			arr[j] = k;
	}
	for (i = 1; i <= N; i++)
		printf("%d ", arr[i]);
	return 0;
}
