/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/10039
 *
 */

#include<stdio.h>

int main(void) {
	int sum = 0, x, i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &x);
		if (x < 40)
			sum += 40;
		else
			sum += x;
	}
	printf("%d", sum / 5);
	return 0;
}
