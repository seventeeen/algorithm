/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4504
 *
 */

#include<stdio.h>

int main(void) {
	int N, x;
	scanf("%d", &N);
	while (1) {
		scanf("%d", &x);
		if (x == 0)
			break;
		printf("%d is ", x);
		if (x%N != 0)
			printf("NOT ");
		printf("a multiple of %d.\n", N);

	}
	return 0;
}
