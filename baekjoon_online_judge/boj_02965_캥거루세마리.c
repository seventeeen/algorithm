/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2965
 *
 */

#include<stdio.h>

#define BIG(x,y) (x > y ? x : y)
int main(void) {
	int a, b, c, k;
	scanf("%d %d %d", &a, &b, &c);
	k = BIG(b - a, c - b);
	printf("%d", k-1);
	return 0;
}
