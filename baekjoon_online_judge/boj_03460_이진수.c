/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3460
 *
 */

#include<stdio.h>

int main(void){
	int arr[25];
	int i, k, N, T;
	for (scanf("%d", &T); T--;) {
		k = 0;
		memset(arr, 0, sizeof(int) * 25);
		scanf("%d", &N);
		while (N) {
			if ((N & 1) == 1)
				arr[k++] = 1;
			else
				arr[k++] = 0;
			N >>= 1;
		}
		for (i = 0; i < k; i++) {
			if (arr[i] == 1)
				printf("%d ", i);
		}
	}
	return 0;
}
