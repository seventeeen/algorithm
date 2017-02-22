/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5724
 *
 */

#include<stdio.h>
#define SQUARE(a) ((a)*(a))
int main(void){
	int N, i, sum;
	while (1) {
		sum = 0;
		scanf("%d", &N);
		if (N==0)
			break;
		for (i = 1; i <= N; i++)
			sum += SQUARE(i);
		printf("%d\n", sum);
	}
	return 0;
}
