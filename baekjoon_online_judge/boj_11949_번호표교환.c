/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11949
 *
 */

#include<stdio.h>
void swap(int*a, int*b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void) {
	int arr[100] = { 0, };
	int N, M, i, j;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (j = 1; j <= M; j++) {
		for (i = 0; i < N - 1; i++) {
			if (arr[i] % j > arr[i + 1] % j)
				swap(&arr[i], &arr[i + 1]);
		}
	}
	for (i = 0; i < N; i++)
		printf("%d\n", arr[i]);

	return 0;
}
