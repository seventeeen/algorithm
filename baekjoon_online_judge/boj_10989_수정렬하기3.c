/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10989
 *
 */

#include<stdio.h>
int arr[10001] = { 0, };
int main(void) {
	int i, N, x, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &x);
		arr[x]++;
	}
	for (i = 1; i <= 10000; i++) {
		for (j = 0; j < arr[i]; j++)
			printf("%d\n", i);
	}
	return 0;
}
