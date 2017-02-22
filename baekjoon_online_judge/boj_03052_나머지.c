/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3052
 *
 */

#include<stdio.h>

int main(void) {
	int i, x, check[42] = { 0, }, cnt=0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &x);
		check[x % 42]++;
	}
	for (i = 0; i < 42; i++) {
		if (check[i] != 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
