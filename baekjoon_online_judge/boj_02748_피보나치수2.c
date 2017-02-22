/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2748
 *
 */

#include <stdio.h>
long long int arr[100] = { 0, 1, 1, };
long long int fib(int n) {
	if (arr[n] == 0)
		arr[n] = fib(n - 1) + fib(n - 2);
	return arr[n];
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", fib(n));
	return 0;
}
