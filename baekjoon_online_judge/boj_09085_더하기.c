/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9085
 *
 */

#include<stdio.h>

int main(void) {
	int T, sum, i, N, x;
	for (scanf("%d", &T); T--;) {
		sum = 0;
		scanf("%d", &N);
		for (i = 0; i < N; i++) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n", sum);
	}
	return 0;
}
