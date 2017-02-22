/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10987
 *
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	int i, len, cnt=0;
	char x[110] = { 0, };
	scanf("%s", &x);
	len = strlen(x);
	for (i = 0; i < len; i++) {
		if (x[i] == 'a') cnt++;
		else if (x[i] == 'e') cnt++;
		else if (x[i] == 'i') cnt++;
		else if (x[i] == 'o') cnt++;
		else if (x[i] == 'u') cnt++;
	}
	printf("%d", cnt);
	return 0;
}
