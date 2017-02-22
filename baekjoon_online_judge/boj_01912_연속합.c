/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1912
 *
 */

#include<stdio.h>
int main(void) {
	int N, i, k = 0, arr[100000] = { 0, };
	int max, sum = 0;
	scanf("%d", &N);
	scanf("%d", &arr[0]);
	max = arr[0];
	for (i = 1; i < N; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}
	if (max <= 0) {
		printf("%d", max);
		return 0;
	}
	max = sum = arr[0];
	for (i = 1; i < N; i++) {
		if (sum + arr[i] >= 0)
			sum += arr[i];
		else
			sum = 0;
		if (sum > max)
			max = sum;
	}
	printf("%d", max);
	return 0;
}
