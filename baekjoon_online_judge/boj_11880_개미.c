/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11880
 *
 */

#include<stdio.h>
#include<stdlib.h>
int compare(const void* fst, const void* snd) {
	if (*(long long int*)fst >= *(long long int*)snd)
		return 1;
	else return -1;
}
int main(void) {
	long long int arr[3], result;
	int T;
	for (scanf("%d", &T); T--;) {
		scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
		qsort(arr, 3, sizeof(long long int), compare);
		result = (arr[0] + arr[1])*(arr[0] + arr[1]) + arr[2] * arr[2];
		printf("%lld\n", result);
	}
	return 0;
}
