/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5612
 *
 */

#include<stdio.h>

int main(void) {
	int N, M, x, y;
	int i, max;
	scanf("%d %d", &N, &M);
	max = M;
	for (i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		M += x;
		M -= y;
		if (M > max)
			max = M;
		else if (M < 0) {
			printf("0");
			return 0;
		}
	}
	printf("%d", max);
	return 0;
}
