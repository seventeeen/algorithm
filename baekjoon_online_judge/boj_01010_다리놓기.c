/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1010
 *
 */

#include<stdio.h>
#define NR_MAX 31

int main(void) {
	int T, N, M, i, j;
	int arr[NR_MAX][NR_MAX] = { 0, };

	for (i = 0; i < NR_MAX; i++)
		arr[i][0] = 1;
	for (i = 1; i < NR_MAX; i++) {
		for (j = 1; j <= i; j++)
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
	}

	for (scanf("%d", &T); T--;) {
		scanf("%d %d", &N, &M);
		printf("%d\n", arr[M][N]);
	}
	return 0;
}
