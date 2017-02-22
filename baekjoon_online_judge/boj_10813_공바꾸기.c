/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10813
 *
 */

#include<stdio.h>
void swap(int *a, int*b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void) {
	int N, M, arr[101] = { 0, }, i, x, y;
	scanf("%d %d", &N, &M);
	for (i = 1; i <= N; i++)
		arr[i] = i;
	for (i = 0; i < M; i++) {
		scanf("%d %d", &x, &y);
		swap(&arr[x], &arr[y]);
	}
	for (i = 1; i <= N; i++)
		printf("%d ", arr[i]);
	return 0;
}
