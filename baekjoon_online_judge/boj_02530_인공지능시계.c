/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2530
 *
 */

#include<stdio.h>
#define SIX 60
int main(void) {
	int hour, minute, second, time, result;
	scanf("%d %d %d %d", &hour, &minute, &second, &time);
	result = hour*SIX*SIX + minute*SIX + second + time;
	printf("%d %d %d", (result / (SIX*SIX)) % 24, (result%(SIX*SIX)) / SIX, result%SIX);
	return 0;
}
