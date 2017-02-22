/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2744
 *
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void) {
	int i, len;
	char str[101] = { 0, };
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (isupper(str[i]))
			printf("%c", tolower(str[i]));
		else
			printf("%c", toupper(str[i]));
	}
	return 0;
}
