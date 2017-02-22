/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11047
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int N, K, i, cal_K, result=0;
	int arr[10] = { 0, };

	scanf("%d %d", &N, &K);

	cal_K = K;

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (i = 0; cal_K != 0; i++) {
		result += cal_K / arr[N - 1 - i];
		cal_K -= arr[N - 1 - i] *(cal_K/arr[N-1-i]);
	}
	printf("%d", result);

	return 0;
}
