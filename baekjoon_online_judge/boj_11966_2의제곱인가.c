/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11966
 *
 */

#include<stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	if (N == 1) {
		printf("1");
		return 0;
	}
	while (N > 1) {
		if (N % 2 == 0)
			N /= 2;
		else {
			printf("0");
			return 0;
		}
	}
	printf("1");
	return 0;
}
