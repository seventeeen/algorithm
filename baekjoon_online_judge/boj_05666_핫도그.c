/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5666
 *
 */

#include<stdio.h>

int main(void) {
	float x, y;
	while (scanf("%f %f", &x, &y) != EOF)
		printf("%.2f\n", x / y);

	return 0;
}
