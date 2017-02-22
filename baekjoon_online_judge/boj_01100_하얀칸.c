/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1100
 *
 */

#include <stdio.h>
int main() {
	int N=0, i, j;
	char arr[8][9];
	for (i = 0; i < 8; i++) {
			scanf("%s", arr[i]);
	}

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if ((((i + j)&1) == 0) && (arr[i][j] == 'F'))
				N++;
		}
	}

	printf("%d", N);
	return 0;
}
