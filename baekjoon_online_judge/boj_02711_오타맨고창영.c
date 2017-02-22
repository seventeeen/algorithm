/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2711
 *
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	int T, i, n, len;
	char str[90];
	for (scanf("%d", &T); T--;) {
		scanf("%d %s", &n, str);
		len = strlen(str);
		for (i = 0; i < n-1; i++)
			printf("%c", str[i]);
		for (i = n; i < len; i++)
			printf("%c", str[i]);
		printf("\n");
	}
	return 0;
}
