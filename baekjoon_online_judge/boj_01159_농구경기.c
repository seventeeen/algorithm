/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1159
 *
 */

#include<stdio.h>
int main(void){
	char name[35];
	int i, N, cnt=0, arr[26] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s", name);
		arr[name[0] - 'a']++;
	}
	for (i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			printf("%c", i + 'a');
			cnt++;
		}
	}
	if (cnt == 0)
		printf("PREDAJA");
	return 0;
}

