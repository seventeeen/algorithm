/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2750
 *
 */

#include<stdio.h>

int main(){
	int i, j, temp, N, arr[1000] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (j = 0; j < N - 1; j++) {
		for (i = 0; i < N - 1 -j; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return 0;
}
