/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10950
 *
 */

#include<stdio.h>

int main() {
	int x, y, T;
	for (scanf("%d", &T); T--;) {
		scanf("%d %d", &x, &y);
		printf("%d\n", x + y);
	}
	return 0;
}
