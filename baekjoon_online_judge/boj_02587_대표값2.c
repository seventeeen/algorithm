/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2587
 *
 */

#include<stdio.h>
#include<stdlib.h>

int compare(const void* fst, const void* sec) {
	return *(int*)fst - *(int*)sec;
}
int main() {
	int i, arr[5], sum=0;
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	qsort(arr, 5, sizeof(int), compare);

	for (i = 0; i < 5; i++)
		sum += arr[i];
	
		
	printf("%d\n%d", sum / 5, arr[2]);

	return 0;
}
