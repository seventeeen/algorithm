/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1371
 *
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void) {
	int T, len;
	int table[26] = { 0, };
	char base[5001];
	while (scanf("%s", base)!=EOF) {
		len = strlen(base);
		for (int i = 0; i < len; i++) {
			if (isalpha(base[i]))
				table[base[i] - 'a']++;
		}
	}
	int max = -1;
	for (int i = 0; i < 26; i++) {
		if (table[i] > max)
			max = table[i];
	}
	for (int i = 0; i < 26; i++) {
		if (table[i] == max)
			printf("%c", i + 'a');
	}
	return 0;
}
