/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5618
 *
 */

#include<stdio.h>

#define SMALL(a,b) (a<b ? a : b)
int main(void) {
	int i, N, a, b, c;
	scanf("%d", &N);
	if (N == 2) {
		scanf("%d %d", &a, &b);
		for (i = 1; i <= SMALL(a, b); i++) {
			if (a%i == 0 && b%i == 0)
				printf("%d\n", i);
		}
	}
	else {
		scanf("%d %d %d", &a, &b, &c);
		for (i = 1; i <= SMALL(SMALL(a, b), c); i++) {
			if ((a%i == 0 && b%i == 0)&(c%i == 0))
				printf("%d\n", i);
		}
	}
	return 0;
}
