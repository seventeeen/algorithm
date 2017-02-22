/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11718
 *
 */

#include<stdio.h>
int main(void) {
	char str[128];
	while (fgets(str, 120, stdin)!=NULL)
		printf("%s", str);
	return 0;
}
