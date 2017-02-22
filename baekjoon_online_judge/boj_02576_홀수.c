/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2576
 *
 */

#include<stdio.h>

int main(void) {
	int i, n, min = 100, sum = 0;
	for (i = 0; i < 7; i++) {
		scanf("%d", &n);
		if (n & 1 == 1) {
			sum += n;
			if (n < min)
				min = n;
		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
	return 0;
}
