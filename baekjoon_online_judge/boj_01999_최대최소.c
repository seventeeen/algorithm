/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1999
 *
 */

#include<stdio.h>
#include<string.h>
int arr[251][251];
int result(int (*check)[251], int B, int x, int y) {
	int i, j, max = -1, min=251;
	if (arr[x][y] == -1) {
		for (i = 0; i < B; i++) {
			for (j = 0; j < B; j++) {
				if (check[x + i][y + j] > max)
					max = check[x + i][y + j];
				if (check[x + i][y + j] < min)
					min = check[x + i][y + j];
			}
		}
		arr[x][y] = max - min;
	}
	return arr[x][y];

}
int main(void) {
	int N, B, k, i, j, x, y;
	int check[251][251] = { 0, };
	scanf("%d %d %d", &N, &B, &k);
	for (i = 1; i <= N; i++)
		memset(arr[i] + 1, -1, sizeof(int)*N);
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++)
			scanf("%d", &check[i][j]);
	}
	for (i = 0; i < k; i++) {
		scanf("%d %d", &x, &y);
		printf("%d\n", result(check, B, x, y));
	}
	return 0;
}
