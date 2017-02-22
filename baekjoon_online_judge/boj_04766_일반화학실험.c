/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/4766
 *
 */

#include<stdio.h>

int main(void){
	double x, temp;
	scanf("%lf", &temp);
	while (1) {
		scanf("%lf", &x);
		if (x == 999)
			break;
		printf("%.2lf\n", x - temp);
		temp = x;
	}
	return 0;
}
