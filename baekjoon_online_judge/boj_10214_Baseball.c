/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10214
 *
 */

#include<stdio.h>

int main(void) {
	int i, y, k, T;
	int yon, kor;
	for (scanf("%d", &T); T--;) {
		yon = 0;
		kor = 0;
		for (i = 0; i < 9; i++) {
			scanf("%d %d", &y, &k);
			yon += y;
			kor += k;
		}
		if (yon > kor)
			printf("Yonsei\n");
		else if (yon < kor)
			printf("Korea\n");
		else
			printf("Draw\n");
	}
	return 0;
}
