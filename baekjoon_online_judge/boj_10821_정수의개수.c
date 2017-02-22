/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10821
 *
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	char str[101] = { 0, };
	int i, cnt = 1, len;
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == ',')
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}
