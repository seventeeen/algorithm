/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2559
 *
 */

#include<stdio.h>
int arr[100000] = { 0, };
int main() {
	int N, K, i, sum=0, max=-500;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (i=0; i<K; i++)
		sum += arr[i];
	max = sum;
	for (i = 1; i + K - 1 < N; i++){
		sum -= arr[i - 1];
		sum += arr[i + K - 1];
		if (max < sum)
			max = sum;
	}
	printf("%d", max);
	return 0;
}
