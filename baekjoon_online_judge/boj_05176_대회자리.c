/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5176
 *
 */

#include<stdio.h>
#include<string.h>
int main(void) {
	int T, N, M, arr[512], cnt, i, x;
	for (scanf("%d", &T); T--;) {
		scanf("%d %d", &N, &M);
		cnt = 0;
		memset(arr + 1, 0, sizeof(int)*M);
		for (i = 0; i < N; i++) {
			scanf("%d", &x);
			if (arr[x] == 0)
				arr[x]++;
			else
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
