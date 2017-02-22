/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12018
 *
 */

#include<stdio.h>
#include<stdlib.h>
int compare(const void* fst, const void* snd) {
	return *(int*)fst - *(int*)snd;
}
int main(void){
	int N, M, arr[100] = { 0, }, temp[100] = { 0, };
	int i, j, x, y, cnt=0;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		for (j = 0; j < x; j++)
			scanf("%d", &temp[j]);
		if (x - y < 0)
			arr[i]++;
		else {
			qsort(temp, x, sizeof(int), compare);
			arr[i] = temp[x - y];
		}
	}
	qsort(arr, N, sizeof(int), compare);
	for (i = 0; i < N; i++) {
		if (arr[i] > M)
			break;
		if (arr[i] > 36)
			break;
		M -= arr[i];
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
