/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/8741
 *
 */

#include<stdio.h>
int main(void) {
	int k, i;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
		printf("1");
	for (i = 0; i < k - 1; i++)
		printf("0");
	return 0;
}
