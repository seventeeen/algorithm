/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10809
 *
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	int arr[26], len, i;
	char str[101] = { 0, };
	memset(arr, -1, sizeof(int) * 26);
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (arr[str[i] - 'a'] == -1)
			arr[str[i] - 'a'] = i;
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
