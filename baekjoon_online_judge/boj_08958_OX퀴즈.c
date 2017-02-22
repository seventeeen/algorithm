/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/8958
 *
 */

#include<stdio.h>
#include<string.h>

int main(void) {
	int i, T, len, score, cnt;
	char input[100] = { 0, };
	for (scanf("%d", &T); T--;) {
		scanf("%s", input);
		len = strlen(input);
		cnt = 1;
		if (input[0] == 'O')
			score = 1;
		else
			score = 0;
		for (i = 1; i < len; i++) {
			if (input[i - 1] == 'O')
				cnt++;
			else
				cnt = 1;
			if (input[i] == 'O')
				score += cnt;
		}
		printf("%d\n", score);
	}
	return 0;
}
