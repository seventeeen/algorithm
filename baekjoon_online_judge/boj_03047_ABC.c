/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3047
 *
 */

#include<stdio.h>
#include<stdlib.h>
int compare(const void*fst, const void*snd) {
	return *(int*)fst - *(int*)snd;
}
int main(void) {
	int arr[3], i;
	char str[4];
	scanf("%d %d %d %s", &arr[0], &arr[1], &arr[2], str);
	qsort(arr, 3, sizeof(int), compare);
	printf("%d %d %d", arr[str[0] - 'A'], arr[str[1] - 'A'], arr[str[2] - 'A']);
	return 0;
}
