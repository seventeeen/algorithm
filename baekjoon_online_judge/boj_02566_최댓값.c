/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2566
 *
 */

#include<stdio.h>

int main(void) {
	int i, j, n, max = 0, x, y;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			scanf("%d", &n);
			if (n > max) {
				max = n;
				x = i;
				y = j;
			}
		}
	}
	printf("%d\n%d %d", max, x, y);

	return 0;
}
