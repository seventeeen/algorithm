/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11948
 *
 */

#include<stdio.h>

int main(void) {
	int x, min = 101, i, sum = 0;
	for (i = 0; i < 4; i++) {
		scanf("%d", &x);
		sum += x;
		if (min > x)
			min = x;
	}
	sum -= min;
	min = 101;
	for (i = 0; i < 2; i++) {
		scanf("%d", &x);
		sum += x;
		if (min > x)
			min = x;
	}
	sum -= min;
	printf("%d", sum);
	return 0;
}
