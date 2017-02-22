/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4999
 *
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	char JH[1001] = { 0, }, Dr[1001] = { 0, };
	int len_JH, len_Dr;
	scanf("%s %s", JH, Dr);
	len_JH = strlen(JH);
	len_Dr = strlen(Dr);
	if (len_Dr > len_JH)
		printf("no");
	else
		printf("go");
	return 0;
}
