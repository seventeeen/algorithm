/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5554
 *
 */

#include<stdio.h>

#define MINUTE 60

int main(void) {
	int sum=0, x, i;
	for (i = 0; i < 4; i++) {
		scanf("%d", &x);
		sum += x;
	}
	printf("%d\n%d", sum / MINUTE, sum % MINUTE);
	return 0;
}
