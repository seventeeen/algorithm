/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2563
 *
 */

#include<stdio.h>

int main(void){
	int paper[100][100] = { 0, };
	int N, x, y, i, j, k, cnt = 0;
	scanf("%d", &N);
	for (k = 0; k < N; k++) {
		scanf("%d %d", &y, &x);
		for (i = x; i < x + 10; i++) {
			for (j = y; j < y + 10; j++)
				paper[i][j]++;
		}
	}
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			if (paper[i][j] != 0)
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
