/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5063
 *
 */

#include<stdio.h>

int main(void){
	int T, r, e, c;
	for (scanf("%d", &T); T--;) {
		scanf("%d %d %d", &r, &e, &c);
		if (r > e - c)
			printf("do not advertise\n");
		else if (r < e - c)
			printf("advertise\n");
		else
			printf("does not matter\n");
	}
	return 0;
}
