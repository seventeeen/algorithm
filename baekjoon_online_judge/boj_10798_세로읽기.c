/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10798
 *
 */

#include<stdio.h>

int main() {
	int i, j; 
	char str[5][16] = { 0, };
	for (i = 0; i < 5; i++)
		scanf("%s", str[i]);
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 5; j++) {
			if (str[j][i] != 0)
				printf("%c", str[j][i]);
		}
	}	
    return 0;
}
