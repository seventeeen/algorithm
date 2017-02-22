/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2577
 *
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int i, a, b, c, val, len, result[10] = { 0, };
	char num[20] = { 0, };
	scanf("%d %d %d", &a, &b, &c);
	val = a*b*c;
	sprintf(num, "%d", val);
	len = strlen(num);
	for (i = 0; i < len; i++)
		result[num[i]-'0']++;
	for (i = 0; i < 10; i++)
		printf("%d\n", result[i]);
	return 0;
}
