/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10952
 *
 */

#include<stdio.h>

int main(void) {
	int A, B;
	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) break;
		printf("%d\n", A + B);
	}
	return 0;
}
