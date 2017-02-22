/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2857
 *
 */

#include<stdio.h>
#include<string.h>
#define RANGE 5
int main(void){
	char name[12], FBI[4] = "FBI\0";
	int i, cnt=0;
	for (i = 0; i < RANGE; i++) {
		scanf("%s", name);
		if (strstr(name, FBI)) {
			printf("%d ", i + 1);
			cnt++;
		}
	}
	if (cnt == 0)
		printf("HE GOT AWAY!");
	return 0;
}
