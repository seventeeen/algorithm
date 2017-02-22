/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2751
 *
 */

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
	if (*(int*)a > *(int*)b) return 1;
	else if (*(int*)a < *(int*)b) return -1;
	else return 0;
}
int arr[1000000];
int main(){
	int i, N;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	qsort(arr, N, sizeof(int), compare);

	for (i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return 0;
}
