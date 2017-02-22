/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1075
 *
 */

#include<stdio.h>
int main(void) {
	int N, F;
	scanf("%d %d", &N, &F);
	N /= 100; N *= 100;

	if (N%F == 0)
		printf("00");
	else if (F - N%F < 10)
		printf("0%d", F - N%F);
	else
		printf("%d", F - N%F);
	return 0;
}
