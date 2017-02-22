/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2010
 *
 */

#include<stdio.h>

int main() {
	int N, i, sum=0, x;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &x);
		sum += x;
	}
	printf("%d", sum - N + 1);
	return 0;
}
