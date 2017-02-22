/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2908
 *
 */

#include<stdio.h>
#define BIG(a,b) (a>b ? a : b)
int main(void){
	int x, y;
	scanf("%d %d", &x, &y);
	x = x / 100 + (x % 10) * 100 + ((x % 100) / 10) * 10;
	y = y / 100 + (y % 10) * 100 + ((y % 100) / 10) * 10;
	printf("%d", BIG(x,y));
	return 0;
}
