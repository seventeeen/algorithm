/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5543
 *
 */

#include<stdio.h>

#define SMALL(n,m) ((n)<(m) ? (n) : (m))

int main(void) {
	int a, b, c, x, y;
	scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
	printf("%d", SMALL(SMALL(a,b),c) + SMALL(x,y) - 50);
	return 0;
}
