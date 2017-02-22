/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1316
 *
 */

#include<stdio.h>
#include<string.h>

int main(void){
	int N, i, j, len, check[26], cnt=0, temp;
	char word[110];
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		temp = 1;
		scanf("%s", word);
		memset(check, 0, sizeof(int) * 26);
		len = strlen(word);
		check[word[0] - 'a']++;
		for (j = 1; j < len; j++) {
			if ((check[word[j] - 'a'] != 0) && (word[j] != word[j - 1])) {
				temp = 0;
				break;
			}
			else
				check[word[j] - 'a']++;
		}
		if (temp != 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
