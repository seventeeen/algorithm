/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4435
 *
 */

#include<stdio.h>

int main(void){
	
	int N, i, j, x, good_sum, evil_sum;
	int good[6] = { 1,2,3,3,4,10 }, evil[7] = { 1,2,2,2,3,5,10 };
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		good_sum = 0;
		evil_sum = 0;
		for (j = 0; j < 6; j++) {
			scanf("%d", &x);
			good_sum += x*good[j];
		}
		for (j = 0; j < 7; j++) {
			scanf("%d", &x);
			evil_sum += x*evil[j];
		}
		printf("Battle %d: ", i + 1);
		if (good_sum > evil_sum)
			printf("Good triumphs over Evil\n");
		else if (good_sum < evil_sum)
			printf("Evil eradicates all trace of Good\n");
		else
			printf("No victor on this battle field\n");
	}

	return 0;
}
