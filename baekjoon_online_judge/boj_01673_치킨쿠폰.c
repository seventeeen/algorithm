/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1673
 *
 */

#include<stdio.h>

int main(void) {
	long long int n, k, cp, result;
	while (scanf("%lld %lld", &n, &k) != EOF) {
		result = n;
		cp = n;
		while (cp / k > 0) {
			result += cp / k;
			cp = cp%k + cp / k;
		}
		printf("%lld\n", result);
	}
	return 0;
}
