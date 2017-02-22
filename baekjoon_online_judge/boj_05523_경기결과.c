/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5523
 *
 */

#include<stdio.h>

int main(void) {
	int N, x, y, A=0, B=0, i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		if (x > y)
			A++;
		else if (x < y)
			B++;
	}
	printf("%d %d", A, B);
	return 0;
}
