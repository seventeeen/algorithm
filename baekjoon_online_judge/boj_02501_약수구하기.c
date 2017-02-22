/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2501
 *
 */

#include<stdio.h>

int main(void) {
	int cnt = 0, i, N, K;
	scanf("%d %d", &N, &K);
	for (i = 1; i <= N; i++) {
		if (N%i == 0)
			cnt++;
		if (cnt == K) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}
