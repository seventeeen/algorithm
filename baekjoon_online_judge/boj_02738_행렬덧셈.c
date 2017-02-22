/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2738
 *
 */

#include<stdio.h>

int main(void){
	int arr[100][100] = { 0, };
	int N, M, i, j, x;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &x);
			arr[i][j] += x;
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &x);
			arr[i][j] += x;
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
