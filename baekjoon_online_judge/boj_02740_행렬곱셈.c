/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2740
 *
 */

#include<stdio.h>

int main(void){
	int N, M, K, i, j, p;
	int ar1[100][100] = { 0, }, ar2[100][100] = { 0, }, result[100][100] = { 0, };
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++)
			scanf("%d", &ar1[i][j]);
	}
	scanf("%d %d", &M, &K);
	for (i = 0; i < M; i++) {
		for (j = 0; j < K; j++)
			scanf("%d", &ar2[i][j]);
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++) {
			for (p = 0; p < M; p++)
				result[i][j] += ar1[i][p] * ar2[p][j];
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++)
			printf("%d ", result[i][j]);
		printf("\n");
	}
	return 0;
}
