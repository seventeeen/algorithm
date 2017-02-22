/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10812
 *
 */

#include<stdio.h>
int temp[201];
int arr[101] = { 0, };
void swap(int a, int b, int c) {
	int i, len, j=a, k;
	len = b - a + 1;
	for (i = 0; i < len; i++) {
		temp[i + len] = temp[i] = arr[j];
		j++;
	}
	k = c - a;
	for (i = a; i <= b; i++)
		arr[i] = temp[k++];
}
int main(void) {
	int N, M, i, x, y, k;
	scanf("%d %d", &N, &M);
	for (i = 0; i <= N; i++)
		arr[i] = i;
	for (i = 0; i < M; i++) {
		scanf("%d %d %d", &x, &y, &k);
		swap(x, y, k);
	}
	for (i = 1; i <= N; i++)
		printf("%d ", arr[i]);
	return 0;
}
