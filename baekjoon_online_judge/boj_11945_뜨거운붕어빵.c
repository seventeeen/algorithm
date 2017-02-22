/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11945
 *
 */

#include<stdio.h>

int main() {
	char str[10][11] = { 0, };
	int N, M, i, j;
	scanf("%d %d", &N, &M);

	for(i=0; i<N; i++)
		scanf("%s", &str[i]);

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++)
			printf("%c", str[i][M - 1 - j]);
		printf("\n");
	}
    return 0;
}
