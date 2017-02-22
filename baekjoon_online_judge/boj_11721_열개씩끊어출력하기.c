/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11721
 *
 */

#include<stdio.h>

int main(void) {
	char str[101], s=0;
	scanf("%s", str);
	while (1) {
		if (str[s] == '\0')
			break;
		printf("%c", str[s]);
		if (s % 10 == 9)
			printf("\n");
		s++;
	}
	return 0;
}
