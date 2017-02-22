/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10818
 *
 */

#include<stdio.h>
#define abs 10000000
int main(void) {
	int N, i, min=abs, max=abs*-1, x;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &x);
		if (x > max) max = x;
		if (x < min) min = x;
	}
	printf("%d %d", min, max);
	return 0;
}
