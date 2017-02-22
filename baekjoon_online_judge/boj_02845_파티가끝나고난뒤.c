/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2845
 *
 */

#include<stdio.h>
#define RANGE 5
int main(void){
	int L, P, num, i, x;
	scanf("%d %d", &L, &P);
	num = L*P;
	for (i = 0; i < RANGE; i++) {
		scanf("%d", &x);
		printf("%d ", x - num);
	}
	return 0;
}
