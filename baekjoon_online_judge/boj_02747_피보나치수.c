/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2747
 *
 */

#include <stdio.h>

int arr[50] = { 0, 1, 1, };
int fib(int n) {
	if (arr[n] == 0)
		arr[n] = fib(n - 1) + fib(n - 2);
	return arr[n];
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}
