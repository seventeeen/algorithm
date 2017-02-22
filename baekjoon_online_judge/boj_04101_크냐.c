/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4101
 *
 */

#include<stdio.h>
int main(void) {
	int x, y;
	while (1) {
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;
		printf((x > y ? "Yes\n" : "No\n"));
	}
	return 0;
}
