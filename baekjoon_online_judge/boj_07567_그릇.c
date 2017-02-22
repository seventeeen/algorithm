/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/7567
 *
 */

#include<stdio.h>

int main(void) {
	int i = 0, sum = 10;
	char s[60];
	scanf("%s", s);
	while (s[++i]) {
		if (s[i] == s[i - 1])
			sum += 5;
		else
			sum += 10;
	}
	printf("%d", sum);
	return 0;
}
