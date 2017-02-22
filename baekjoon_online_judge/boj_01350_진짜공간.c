/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1350
 *
 */

#include<stdio.h>


int main() {
	int N, i;
	long long int arr[1001] = { 0, }, sum = 0, x, k;

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
		scanf("%lld", &arr[i]);
	scanf("%lld", &x);
	for (i = 1; i <= N; i++) {
		k = arr[i] / x;
		if (arr[i] % x == 0)
			sum += k*x;
		else
			sum += (k + 1)*x;
	}
	printf("%lld", sum);
	return 0;
}
