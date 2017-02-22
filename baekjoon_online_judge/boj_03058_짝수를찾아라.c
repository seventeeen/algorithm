/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3058
 *
 */

#include<stdio.h>
int main(void){
	int i, n, min, sum, T;
	for (scanf("%d", &T); T--;) {
		sum = 0;
		min = 100;
		for (i = 0; i < 7; i++) {
			scanf("%d", &n);
			if ((n&1) == 0) {
				sum += n;
				if (n < min)
					min = n;
			}
		}
		printf("%d %d\n", sum, min);
	}
	return 0;
}
