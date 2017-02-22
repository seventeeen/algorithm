/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/7568
 *
 */

#include<stdio.h>

int main(void) {
	int N, i, j, arr[55][3] = { 0, };
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				arr[i][2]++;
		}
		printf("%d ", arr[i][2] + 1);
	}
	return 0;
}
