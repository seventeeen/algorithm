/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5086
 *
 */

#include<stdio.h>

int main(void){
	int x, y;
	while (1) {
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;
		if (x%y == 0)
			printf("multiple\n");
		else if (y%x == 0)
			printf("factor\n");
		else
			printf("neither\n");
	}
	return 0;
}
