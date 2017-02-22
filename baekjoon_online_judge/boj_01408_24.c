/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1408
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int hour, min, sec, start;
	int hour_, min_, sec_, end;
	char temp;
	scanf("%d%c%d%c%d", &hour, &temp, &min, &temp, &sec);
	scanf("%d%c%d%c%d", &hour_, &temp, &min_, &temp, &sec_);
	start = hour * 60 * 60 + min * 60 + sec;
	end = hour_ * 60 * 60 + min_ * 60 + sec_;
	if (end < start)
		end += 60 * 60 * 24;
	end -= start;
	printf("%.2d:%.2d:%.2d", end/(60*60), (end%(60*60))/60,end%60);

	return 0;
}
