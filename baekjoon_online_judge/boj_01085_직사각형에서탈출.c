/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1085
 *
 */

#include<stdio.h>
#define SMALL(a,b) (((a)<(b)) ? (a) : (b))

int main(void) {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	printf("%d", SMALL(SMALL(w - x, x), SMALL(h - y, y)));
	return 0;
}
