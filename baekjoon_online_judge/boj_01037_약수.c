/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1037
 *
 */

#include<stdio.h>
int main(void) {
	int A[50] = { 0, };
	int N, i, temp;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	for (i = 0; i < N - 1; i++) {
		if (A[i] > A[i + 1]) {
			temp = A[i];
			A[i] = A[i + 1];
			A[i + 1] = temp;
		}
	}
	for (i = N-1; i > 0; i--) {
		if (A[i] < A[i - 1]) {
			temp = A[i];
			A[i] = A[i - 1];
			A[i - 1] = temp;
		}
	}
	printf("%d", A[0] * A[N - 1]);
	return 0;
}
