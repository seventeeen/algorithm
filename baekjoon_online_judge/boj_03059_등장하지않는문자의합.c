/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/3059
 *
 */

#include<stdio.h>
#include<string.h>
int main(void){
	int i, T, len, sum, arr[26];
	char str[1001] = { 0, };
	for (scanf("%d", &T); T--;) {
		sum = 0;
		memset(arr, 0, sizeof(int) * 26);
		scanf("%s", str);
		len = strlen(str);
		for (i = 0; i < len; i++)
			arr[str[i] - 'A']++;
		for (i = 0; i < 26; i++) {
			if (arr[i] == 0)
				sum += i + 'A';
		}
		printf("%d\n", sum);
	}
	return 0;
}
