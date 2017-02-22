/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10599
 *
 */

#include<stdio.h>

int main(void) {
	int a, b, c, d;
	while (1) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if ((a == 0 && b == 0) & (c == 0 && d == 0))
			break;
		printf("%d %d\n", c - b, d - a);
	}
	return 0;
}
