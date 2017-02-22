/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1065
 *
 */

#include<stdio.h>

int main() {
	int N, x, y, z, sum=99;
	scanf("%d", &N);
	if (N < 100)
		printf("%d", N);
	else if (N == 1000)
		printf("144");
	else {
		while (N > 100) {
			x = N % 10;
			y = (N % 100) / 10;
			z = N / 100;
			if (x - y == y - z)
				sum++;
			N--;
		}
		printf("%d", sum);
	}
	return 0;
}
