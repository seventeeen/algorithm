/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2953
 *
 */

#include<stdio.h>

int main(){
	int x, i, arr[5] = { 0, }, max=0, who=0;
	for (i = 0; i < 20; i++) {
		scanf("%d", &x);
		arr[i / 4] += x;
	}
	for (i = 0; i < 5; i++) {
		if (max < arr[i]) {
			who = i + 1;
			max = arr[i];
		}
	}
	printf("%d %d", who, max);
	return 0;
}
