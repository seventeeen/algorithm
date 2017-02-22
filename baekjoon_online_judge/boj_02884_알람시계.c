/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2884
 *
 */

#include<stdio.h>
int main(void) {
	int hour, minute, temp = 24*60;
	scanf("%d %d", &hour, &minute);
	temp += hour*60 + minute - 45;
	if (temp / 60 >= 24)
		temp -= 24 * 60;
	printf("%d %d", temp/60, temp%60);

	return 0;
}
