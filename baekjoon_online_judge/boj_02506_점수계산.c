/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2506
 *
 */

#include<stdio.h>

int main(void) {
	int N, i, x, temp=0, sum = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &x);
		if (x == 0)
			temp = 0;
		else {
			sum += (++temp);
		}
	}
	printf("%d", sum);
	return 0;
}
