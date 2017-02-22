/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1015
 *
 */

#include<stdio.h>
int main(void) {
	int A[50] = { 0, };
	int P[50] = { 0, };
	int X[50] = { 0, };
	int N, i, j, temp;
	
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		P[i] = i;
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				temp = P[j];
				P[j] = P[j + 1];
				P[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++)
		X[P[i]] = i;
	for (i = 0; i < N; i++)
		printf("%d ", X[i]);
	return 0;
}
