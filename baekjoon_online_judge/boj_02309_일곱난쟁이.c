/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2309
 *
 */

#include<stdio.h>
#include<stdlib.h>

int compare(const void* fst, const void* sec) {
	return *(int*)fst - *(int*)sec;
}
int main() {
	int arr[9] = { 0, };
	int i, j, sum=0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	sum -= 100;
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (arr[i] + arr[j] == sum) {
				arr[i] = 0;
				arr[j] = 0;
				goto END;
			}
		}
	}
END:
	qsort(arr, 9, sizeof(int), compare);
	for (i = 2; i < 9; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
