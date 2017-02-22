/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2455
 *
 */

#include<stdio.h>

int main(void) {
	int A, B, sum=0, i, max=0;
	for (i = 0; i < 4; i++) {
		scanf("%d %d", &A, &B);
		sum -= A;
		sum += B;
		if (sum > max)
			max = sum;
	}
	printf("%d", max);
	return 0;
}