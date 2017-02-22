/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10709
 *
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	int arr[100][101];
	char matrix[100][101];
	int H, W, i, j;
	scanf("%d %d", &H, &W);
	for(i=0; i<H; i++)
		memset(arr[i], -1, sizeof(int)*W);
	for (i = 0; i < H; i++)
		scanf("%s", matrix[i]);
	
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			if (matrix[i][j] == 'c')
				arr[i][j] = 0;
		}
		for (j = 1; j < W; j++) {
			if (arr[i][j] != 0 && arr[i][j - 1] != -1)
				arr[i][j] = arr[i][j - 1] + 1;
		}
	}
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
