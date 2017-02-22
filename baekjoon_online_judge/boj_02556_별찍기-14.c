/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2556
 *
 */

#include <stdio.h>
int main() {
	int N, i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for(j = 0; j < N; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
