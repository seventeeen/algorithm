/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10797
 *
 */

#include<stdio.h>

int main() {
	int N, sum=0, x, i;
	scanf("%d", &N);
	for (i = 0; i < 5; i++) {
		scanf("%d", &x);
		if (x == N)
			sum++;
	}
	printf("%d", sum);
	return 0;
}
