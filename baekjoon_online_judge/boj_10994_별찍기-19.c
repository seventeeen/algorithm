/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10994
 *
 */

#include<stdio.h>
int main(void) {
	int N, i, j;
	scanf("%d", &N);
	for (i = 1; i <= (N<<1)-1; i++) {
		for(j=1; j<=(i>>1); j++)
			printf("* ");
		if ((i & 1) == 1) {
			for (j = 1; j <= (N << 2) - 1 - (i << 1); j++)
				printf("*");
		}
		else {
			for (j = 1; j <= (N << 2) - 1 - ((i + 1) << 1); j++)
				printf(" ");
		}
		for (j = 1; j <= (i >> 1); j++)
			printf(" *");
		printf("\n");
	}
	for (i = 1; i <= (N << 1) - 2; i++) {
		for (j = 1; j<= N-(i>>1)-1; j++)
			printf("* ");
		if ((i & 1) == 1) {
			for (j = 1; j <= (i << 1) - 1; j++)
				printf(" ");
		}
		else {
			for (j = 1; j <= (i << 1)+1; j++)
				printf("*");
		}
		for (j = 1; j <= N - (i >> 1) - 1; j++)
			printf(" *");
		printf("\n");
	}
	return 0;
}
