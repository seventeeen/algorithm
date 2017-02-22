/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5988
 *
 */

#include<stdio.h>
#include<string.h>
int main(void) {
	char str[64];
	int N, len;
	for (scanf("%d", &N); N--;) {
		scanf("%s", str);
		len = strlen(str);
		if (((str[len - 1] - '0') & 1) == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	return 0;
}
