/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10995
 *
 */

#include<stdio.h>
int main(void) {
	int N, i, j;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		if ((i & 1) == 1) {
			for (j = 1; j <= N; j++)
				printf("* ");
		}
		else {
			for (j = 1; j <= N; j++)
				printf(" *");
		}
		printf("\n");
	}
	return 0;
}
