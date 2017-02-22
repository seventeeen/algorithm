/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1551
 *
 */

#include<stdio.h>

int main(){
	int N, K, arr[20], i, j;
	char temp;
	scanf("%d %d", &N, &K);
	scanf("%d", &arr[0]);
	for (i = 1; i < N; i++)
		scanf("%c%d", &temp, &arr[i]);
	for (i = 0; i < K; i++) {
		for (j = 0; j < N - 1; j++)
			arr[j] = arr[j + 1] - arr[j];
		N--;
	}
	
	printf("%d", arr[0]);
	for (i = 1; i < N; i++) {
		printf(",%d", arr[i]);
	}
	return 0;
}
