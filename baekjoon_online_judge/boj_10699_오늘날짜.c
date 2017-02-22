/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10699
 *
 */

#include<stdio.h>
#include<time.h>

int main(){
	struct tm *t;
	time_t timer;

	timer = time(NULL);
	t = localtime(&timer);
	printf("%.4d-%.2d-%.2d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

	return 0;
}
