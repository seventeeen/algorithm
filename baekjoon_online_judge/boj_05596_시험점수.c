/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5596
 *
 */

#include<stdio.h>

#define BIG(a,b) (a>b ? a : b)
int main(void) {
	int sum1 = 0, sum2 = 0, a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum1 += a + b + c + d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum2 += a + b + c + d;
	printf("%d", BIG(sum1,sum2));
	return 0;
}
