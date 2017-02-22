/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11399
 *
 */

#include<stdio.h>
#include<stdlib.h>

void sort(int *arr, int n) {
	int i, j;
	int temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(void) {
	int N, i;
	int sum=0;
	int P[10000] = { 0, };
	
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &P[i]);

	sort(P, N);

	for (i = 0; i < N; i++) {
		sum += P[i] * (N - i);
	}
	printf("%d", sum);

	return 0;
}
