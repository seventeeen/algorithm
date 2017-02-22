/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1427
 *
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(const void* fst, const void* snd) {
	int a, b;
	a = (int)(*(char*)fst);
	b = (int)(*(char*)snd);
	return b - a;
}
int main(void) {
	char str[16] = { 0, };
	int len;
	scanf("%s", str);
	len = strlen(str);
	qsort(str, len, sizeof(char), compare);
	printf("%s", str);

	return 0;
}
