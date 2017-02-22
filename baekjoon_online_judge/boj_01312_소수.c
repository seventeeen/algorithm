/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1312
 *
 */

#include<stdio.h>
char str[1000001] = { 0, };

int main(void) {
	int A, B, N, i;
	scanf("%d %d %d", &A, &B, &N);
	A %= B;
	for (i = 1; i <= N; i++){
		A *= 10;
		str[i] = A/B+'0';
		A %= B;
	}
	printf("%c", str[N]);
	return 0;
}
