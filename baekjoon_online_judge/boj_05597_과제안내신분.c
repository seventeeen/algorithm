/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5597
 *
 */

#include<stdio.h>

int main(void) {
	int arr[31] = { 0, }, x, i;
	for (i = 0; i < 28; i++) {
		scanf("%d", &x);
		arr[x]++;
	}
	for (i = 1; i <= 30; i++) {
		if (arr[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}
