/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9076
 *
 */

#include<stdio.h>
#include<stdlib.h>

int compare(const void* fst, const void* snd) {
	return *(int*)fst - *(int*)snd;
}
int main(void) {
	int arr[5] = { 0, };
	int T, i;
	for (scanf("%d", &T); T--;) {
		for (i = 0; i < 5; i++)
			scanf("%d", &arr[i]);
		qsort(arr, 5, sizeof(int), compare);
		if (arr[3] - arr[1] >= 4)
			printf("KIN\n");
		else
			printf("%d\n", arr[1] + arr[2] + arr[3]);
	}
	return 0;
}
