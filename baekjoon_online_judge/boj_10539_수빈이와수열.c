/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10539
 *
 */

#include<stdio.h>


int main() {
	int N, i;
	long long int arr[101] = { 0, }, result[101] = { 0, }, sum = 0;

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
		scanf("%lld", &arr[i]);
	for (i = 1; i <= N; i++) {
		result[i] = arr[i] * i - sum;
		sum += result[i];
	}
	for (i = 1; i <= N; i++) {
		printf("%lld ", result[i]);
	}
	return 0;
}
