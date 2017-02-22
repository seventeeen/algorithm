/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10996
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
		if ((N & 1) == 1) {
			for (j = 1; j <= (N >> 1) + 1; j++)
				printf("* ");
			printf("\n");
		}
		else {
			for (j = 1; j <= (N >> 1); j++)
				printf("* ");
			printf("\n");
		}
		for (j = 1; j <= (N >> 1); j++)
			printf(" *");
		printf("\n");
	}
	return 0;
}
