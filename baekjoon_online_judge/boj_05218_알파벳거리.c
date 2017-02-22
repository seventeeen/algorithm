/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5218
 *
 */

#include<stdio.h>
#include<string.h>
int main() {
	char fst_str[30], sec_str[30];
	int N, i, arr[30] = { 0, };
	for (scanf("%d", &N); N--;) {
		scanf("%s %s", fst_str, sec_str);
		for (i = 0; i < strlen(fst_str); i++) {
			if (sec_str[i] >= fst_str[i])
				arr[i] = (sec_str[i] - 'z') - (fst_str[i] - 'z');
			else
				arr[i] = (26 + sec_str[i] - 'z') - (fst_str[i] - 'z');
		}
		printf("Distances: ");
		for(i=0; i<strlen(fst_str); i++)
			printf("%d ", arr[i]);
		printf("\n");
	}

	return 0;
}
