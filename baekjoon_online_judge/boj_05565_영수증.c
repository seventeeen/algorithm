/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5565
 *
 */

#include<stdio.h>
int main(void) {
	int fee, sum=0, i, x;
	scanf("%d", &fee);
	for (i = 0; i < 9; i++) {
		scanf("%d", &x);
		sum += x;
	}
	printf("%d", fee-sum);
	return 0;
}
