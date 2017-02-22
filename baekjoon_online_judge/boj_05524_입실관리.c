/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5524
 *
 */

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void) {
	int N, i, j, len;
	char str[30];
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s", str);
		len = strlen(str);
		for (j = 0; j < len; j++)
			printf("%c", tolower(str[j]));
		printf("\n");
	}
	return 0;
}
