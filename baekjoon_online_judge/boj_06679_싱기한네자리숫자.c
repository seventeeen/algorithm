/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/6679
 *
 */

#include<stdio.h>

int main(void) {
	int a, b, c, d, k=0;
	int ten[10*10*10*10], twelve[12*12*12*12], sixteen[16*16*16*16];
	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			for (c = 0; c < 10; c++) {
				for (d = 0; d < 10; d++)
					ten[k++] = a + b + c + d;
			}
		}
	}
	k = 0;
	for (a = 0; a < 12; a++) {
		for (b = 0; b < 12; b++) {
			for (c = 0; c < 12; c++) {
				for (d = 0; d < 12; d++)
					twelve[k++] = a + b + c + d;
			}
		}
	}
	k = 0;
	for (a = 0; a < 16; a++) {
		for (b = 0; b < 16; b++) {
			for (c = 0; c < 16; c++) {
				for (d = 0; d < 16; d++)
					sixteen[k++] = a + b + c + d;
			}
		}
	}
	for (a = 1000; a <=9999; a++) {
		if (ten[a] == twelve[a] && twelve[a] == sixteen[a])
			printf("%d\n", a);
	}
	return 0;
}
