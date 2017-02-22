/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1946
 *
 */

#include<stdio.h>
int main(void) {
	int T, N, i, x, y, result, min;
	int arr[100001] = { 0, };


	for (scanf("%d", &T); T--;) {
		scanf("%d", &N);
		result = 1;
		for (i = 0; i < N; i++) {
			scanf("%d %d", &x, &y);
			arr[x] = y;
		}
		min = arr[1];
		for (i = 1; i <= N; i++) {
			if(min>arr[i]){
				min = arr[i];
				result++;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}
