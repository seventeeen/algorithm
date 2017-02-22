/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/8394
 *
 */

#include<stdio.h>

int arr[70] = { 0, 1, 2, };
int fib(int n) {
	if (arr[n] == 0)
		arr[n] = (fib(n - 1) + fib(n - 2))%10;
	return arr[n];
}
int main(void) {
	int n;
	fib(60);
	scanf("%d", &n);
	printf("%d", arr[n % 60]);
	return 0;
}
