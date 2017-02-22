/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2562
 *
 */

#include<stdio.h>

int main() {
	int i, x, max=0, num=0;
	for (i = 1; i < 10; i++) {
		scanf("%d", &x);
		if (x > max) {
			max = x;
			num = i;
		}
	}
	printf("%d\n%d", max, num);

	return 0;
}
