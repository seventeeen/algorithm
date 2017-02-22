/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10953
 *
 */

#include<stdio.h>

int main(void) {
	int A, B, T;
	char temp;
	for(scanf("%d", &T); T--;){
		scanf("%d%c%d", &A, &temp, &B);
		printf("%d\n", A + B);
	}
	return 0;
}
