/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10833
 *
 */

#include<stdio.h>

int main() {
	int N, x, y, sum = 0;
	for (scanf("%d", &N); N--;) {
		scanf("%d %d", &x, &y);
		sum += y%x;
	}
	printf("%d", sum);
	return 0;
}
