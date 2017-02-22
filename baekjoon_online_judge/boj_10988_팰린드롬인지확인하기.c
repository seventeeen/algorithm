/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10988
 *
 */

#include<stdio.h>
#include<string.h>
int main(void) {
	int i, len, cnt=1;
	char str[101] = { 0, };
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < (len >> 1); i++) {
		if (str[i] != str[len - 1 - i]) {
			cnt = 0;
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}
