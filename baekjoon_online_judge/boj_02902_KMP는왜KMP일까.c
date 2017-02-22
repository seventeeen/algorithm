/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2902
 *
 */

#include<stdio.h>
#include<string.h>
int main(void) {
	int i, len;
	char str[110] = { 0, };
	scanf("%s", str);
	len = strlen(str);
	printf("%c", str[0]);
	for (i = 1; i < len; i++) {
		if (str[i] == '-' && str[i + 1] != 0)
			printf("%c", str[i + 1]);
	}
	return 0;
}
