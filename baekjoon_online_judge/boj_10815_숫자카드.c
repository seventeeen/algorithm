/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10815
 *
 */

#include<stdio.h>
#include<stdlib.h>
int base[500000];
int input[500000];
int compare(const void* fst, const void* snd) {
	return *(int*)fst - *(int*)snd;
}
int main(void){
	int i, top, low, mid, k;
	int N, M;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &base[i]);
	scanf("%d", &M);
	for (i = 0; i < M; i++)
		scanf("%d", &input[i]);
	qsort(base, N, sizeof(int), compare);
	for (i = 0; i < M; i++) {
		top = N - 1;
		low = 0;
		k = 0;
		while (top >= low) {
			mid = (top+low) >> 1;
			if (input[i] > base[mid])
				low = mid + 1;
			else if (input[i] < base[mid])
				top = mid - 1;
			else {
				k = 1;
				break;
			}
		}
		input[i] = k;
	}
	for (i = 0; i < M; i++)
		printf("%d ", input[i]);
	return 0;
}
