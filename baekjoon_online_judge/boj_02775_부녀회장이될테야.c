/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2775
 *
 */

#include<stdio.h>
int arr[15][15] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, };
int func(int n, int b) {
	if (n < 0 || b < 0)
		return 0;
	if (arr[n][b] == 0)
		arr[n][b] = func(n - 1, b) + func(n, b - 1);
	return arr[n][b];
}
int main(void){
	int n, b, T;
	for (scanf("%d", &T); T--;) {
		scanf("%d %d", &n, &b);
		printf("%d\n", func(n, b));
	}
	return 0;
}
