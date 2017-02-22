/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9507
 *
 */

#include<stdio.h>
#define it unsigned long long int

it arr[70] = { 1, 1, 2, 4, };
it fib(int n) {
	if (arr[n] == 0)
		arr[n] = fib(n - 1) + fib(n - 2) + fib(n - 3) + fib(n - 4);
	return arr[n];
}
int main() {
	int T, x;
	for (scanf("%d", &T); T--;) {
		scanf("%d", &x);
		printf("%lld\n", fib(x));
	}
	return 0;
}
