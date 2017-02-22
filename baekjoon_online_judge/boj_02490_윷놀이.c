/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2490
 *
 */

#include<stdio.h>

int main(void) {
	int x, i, j, zero;
	for (i = 0; i < 3; i++) {
		zero = 0;
		for (j = 0; j < 4; j++) {
			scanf("%d", &x);
			if (x == 0)
				zero++;
		}
		switch (zero) {
		case 1:
			printf("A\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 3:
			printf("C\n");
			break;
		case 4:
			printf("D\n");
			break;
		case 0:
			printf("E\n");
			break;
		default:
			printf("error\n");
		}
	}
	return 0;
}
