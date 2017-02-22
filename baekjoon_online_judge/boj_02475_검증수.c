/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2475
 *
 */

#include<stdio.h>

int main(){
	int arr[5], result = 0, i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		result += arr[i] * arr[i];
	}
	result %= 10;
	printf("%d", result);
	return 0;
}
