/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2525
 *
 */

#include<stdio.h>

#define SIX 60
int main(void) {
	int hour, minute, time, result;
	scanf("%d %d %d", &hour, &minute, &time);
	result = hour*SIX + minute + time;
	printf("%d %d", (result / SIX) % 24, result%SIX);
	return 0;
}
