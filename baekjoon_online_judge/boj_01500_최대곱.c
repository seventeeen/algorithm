/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1500
 *
 */

#include<stdio.h>
int main(void) {
	int S, K, i, val;
	unsigned long long int arr[30], result=1;
	scanf("%d %d", &S, &K);
	val = S / K;
	for (i = 0; i < K; i++)
		arr[i] = val;
	val = S%K;
	for (i = 0; i < val; i++)
		arr[i]++;
	for (i = 0; i < K; i++)
		result *= arr[i];
	printf("%llu", result);
	return 0;
}
