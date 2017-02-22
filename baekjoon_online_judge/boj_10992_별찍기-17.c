/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10992
 *
 */

#include<stdio.h>
int main(void) {
	int N, i, j;
	scanf("%d", &N);
	if (N == 1) {
		printf("*");
		return 0;
	}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N - i; j++)
			printf(" ");
		printf("*");
		if (i == N) {
			for (j = 1; j <= 2 * (N-1); j++)
				printf("*");
		}
		else if (i != 1) {
			for (j = 1; j <= (i << 1) - 3; j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
