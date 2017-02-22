/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2752
 *
 */

#include<stdio.h>

int main(){
	int arr[3] = { 0, };
	int i, j, temp;
	for (i = 0; i < 3; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("%d %d %d", arr[0], arr[1], arr[2]);
	return 0;
}
