/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2675
 *
 */

#include<stdio.h>
#include<string.h>

int main(void){
	int i, N, T, len, j;
	char result[200] = { 0, }, temp[21] = { 0, };
	for (scanf("%d", &T); T--;) {
		scanf("%d %s", &N, temp);
		len = strlen(temp);
		for (i = 0; i < len; i++) {
			for (j = N * i; j < N * (i + 1); j++)
				result[j] = temp[i];
		}
		result[j] = 0;
		printf("%s\n", result);
	}

	return 0;
}
