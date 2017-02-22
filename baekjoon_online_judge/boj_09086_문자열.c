/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9086
 *
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	int T, len;
	char str[1001];
	for (scanf("%d", &T); T--;) {
		scanf("%s", str);
		len = strlen(str);
		printf("%c%c\n", str[0], str[len - 1]);
	}
	return 0;
}
