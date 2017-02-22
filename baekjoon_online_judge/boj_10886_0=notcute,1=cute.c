/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10886
 *
 */

#include<stdio.h>

int main() {
	int N, i, x, yes=0, no=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &x);
		if (x == 1) yes++;
		else no++;
	}
	if (yes > no)
		printf("Junhee is cute!");
	else
		printf("Junhee is not cute!");
	return 0;
}
