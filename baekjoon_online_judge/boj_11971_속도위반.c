/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11971
 *
 */

#include<stdio.h>
#include<stdlib.h>

int compare(void const* fst, void const* snd) {
	return *(int*)snd - *(int*)fst;
}

int main(void) {
	int arr[101] = { 0, }, street[101] = { 0, }, result[101] = { 0, };
	int N, M, i, j=0, a, b, k;
	scanf("%d %d", &N, &M);
	k = 1;
	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		street[0] = b;
		for (j = 1; j <= a; j++)
			street[k++] = b;
	}
	k = 1;
	for (i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		arr[0] = b;
		for (j = 1; j <= a; j++)
			arr[k++] = b;
	}
	for (i = 0; i <= 100; i++)
		result[i] = arr[i] - street[i];
	qsort(result, 101, sizeof(int), compare);
	printf("%d", (result[0] > 0 ? result[0] : 0));
	return 0;
}
