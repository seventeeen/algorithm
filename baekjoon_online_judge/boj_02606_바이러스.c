/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2606
 *
 */

#include<stdio.h>
#include<stdlib.h>

int result[101] = { 0, };
int main() {
	int N, M, i, k, cnt=0;
	scanf("%d %d", &N, &M);
	int *ar1 = (int*)malloc(sizeof(int)*M);
	int *ar2 = (int*)malloc(sizeof(int)*M);
	for (i = 0; i < M; i++)
		scanf("%d %d", &ar1[i], &ar2[i]);
	result[1] = 1;
	for (k = 0; k < (M / 2) + 1; k++) {
		for (i = 0; i < M; i++) {
			if ((result[ar1[i]] == 1) || (result[ar2[i]] == 1)) {
				result[ar1[i]] = 1;
				result[ar2[i]] = 1;
			}
		}
	}
	for (i = 2; i <= 100; i++) {
		if (result[i] == 1)
			cnt++;
	}
	printf("%d", cnt);
	free(ar1);
	free(ar2);
	return 0;
}
