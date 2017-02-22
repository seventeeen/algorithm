/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10811
 *
 */

#include<stdio.h>
void swap(int* arr, int i, int j) {
	int temp;
	int k, range;
	range = (j - i + 1) >> 1;
	for (k = 0; k < range; k++) {
		temp = arr[k+i];
		arr[k + i] = arr[j - k];
		arr[j - k] = temp;
	}
}
int main(void) {
	int arr[110] = { 0, };
	int N, M, i, a, b;
	scanf("%d %d", &N, &M);
	for (i = 1; i <= N; i++)
		arr[i] = i;
	for (i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		swap(arr, a, b);
	}
	for (i = 1; i <= N; i++)
		printf("%d ", arr[i]);
	return 0;
}
