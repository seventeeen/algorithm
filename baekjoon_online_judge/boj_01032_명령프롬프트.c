/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1032
 *
 */

#include<stdio.h>
int main(void) {
	char arr[51] = { 0, };
	char arr_input[51] = { 0, };
	int N, i, j, len=0;
	scanf("%d", &N);

	scanf("%s", arr);
	while (arr[len] != 0)
		len++;
	for (i = 0; i < N - 1; i++) {
		scanf("%s", arr_input);
		for (j = 0; j < len; j++) {
			if (arr[j] != arr_input[j])
				arr[j] = '?';
		}
	}
	for (i = 0; i < len; i++)
		printf("%c", arr[i]);
	return 0;
}
