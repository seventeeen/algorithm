/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10156
 *
 */

#include<stdio.h>

int main(void) {
	int K, N, M, result;
	scanf("%d %d %d", &K, &N, &M);
	result = (K*N)-M;
	printf("%d", (result > 0 ? result : 0));
	return 0;
}
