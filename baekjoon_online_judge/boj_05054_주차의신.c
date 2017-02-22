/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5054
 *
 */

#include<stdio.h>

int main(void) {
	int T, min, max, i, x, n;
	for (scanf("%d", &T); T--;) {
		max = 1;
		min = 100;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &x);
			if (x > max)
				max = x;
			if (x < min)
				min = x;
		}
		printf("%d\n", (max - min) << 1);
	}
	return 0;
}
