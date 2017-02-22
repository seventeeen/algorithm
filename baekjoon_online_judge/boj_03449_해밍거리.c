/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3449
 *
 */

#include<stdio.h>
#include<string.h>

int main(void){
	char str1[101], str2[101];
	int T, i, len, cnt;
	for (scanf("%d", &T); T--;) {
		cnt = 0;
		scanf("%s %s", str1, str2);
		len = strlen(str1);
		for (i = 0; i < len; i++) {
			if (str1[i] != str2[i])
				cnt++;
		}
		printf("Hamming distance is %d.\n", cnt);
	}
	return 0;
}
