/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11022
 *
 */

#include<stdio.h>

int main(void) {
	int T, A, B, i;
	scanf("%d", &T);
	for (i = 1; i <= T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}
	return 0;
}
