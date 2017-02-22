/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5522
 *
 */

#include<stdio.h>

int main(void) {
	int x, i, sum = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &x);
		sum += x;
	}
	printf("%d", sum);
	return 0;
}
