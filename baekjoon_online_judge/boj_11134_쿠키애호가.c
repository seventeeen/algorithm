/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11134
 *
 */

#include<stdio.h>

int main(void){
	int T, N, c;
	for (scanf("%d", &T); T--;) {
		scanf("%d %d", &N, &c);
		printf("%d\n", (N / c) + (N%c!=0));
	}
	return 0;
}
