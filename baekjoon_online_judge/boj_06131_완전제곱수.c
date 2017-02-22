/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/6131
 *
 */

#include<stdio.h>

#define SQUARE(a) ((a)*(a))

int main(void){
	int i, j, N, cnt=0;
	scanf("%d", &N);
	for (i = 1; i <= 500; i++) {
		for (j = 1; j <= i; j++) {
			if (SQUARE(i) == SQUARE(j) + N)
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
