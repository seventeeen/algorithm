/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9243
 *
 */

#include<stdio.h>
#include<string.h>

int main(void){
	int i, len, n;
	char str1[1001] = { 0, }, str2[1001] = { 0, };
	scanf("%d %s %s", &n, str1, str2);
	len = strlen(str1);
	if (n & 1) {
		for (i = 0; i < len; i++) {
			if (str1[i] == str2[i]) {
				printf("Deletion failed\n");
				return 0;
			}
		}
	}
	else {
		for (i = 0; i < len; i++) {
			if (str1[i] != str2[i]) {
				printf("Deletion failed\n");
				return 0;
			}
		}
	}
	printf("Deletion succeeded\n");
	return 0;
}
