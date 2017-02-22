/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1026
 *
 */

#include <stdio.h>
int main() {
	int N, i, j, temp, sum=0;
	int A[50] = { 0, }, B[50] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < N; i++)
		scanf("%d", &B[i]);
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
			if (B[j] < B[j + 1]) {
				temp = B[j];
				B[j] = B[j + 1];
				B[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++)
		sum += A[i] * B[i];
	printf("%d", sum);
	return 0;
}
