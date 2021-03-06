/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11575
 *
 */

#include<stdio.h>
#include<string.h>

char word[1000050] = { 0, };

int main(void) {
	int T, a, b, i, len;
	char ch[26];
	for (scanf("%d", &T); T--;) {
		scanf("%d %d %s", &a, &b, word);
		for (i = 0; i < 26; i++)
			ch[i] = (a*i + b) % 26 + 'A';
		len = strlen(word);
		for (i = 0; i < len; ++i)
			printf("%c", ch[word[i]-'A']);
		printf("\n");
	}
	return 0;
}
