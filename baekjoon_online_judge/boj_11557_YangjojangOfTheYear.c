/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11557
 *
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct {
	char name[32];
	int alc;
}board;
int compare(const void* fst, const void*snd) {
	int a, b;
	a = ((board*)fst)->alc;
	b = ((board*)snd)->alc;
	return b - a;
}
int main(void) {
	int i, T, N;
	board check[100];
	for (scanf("%d", &T); T--;) {
		scanf("%d", &N);
		for (i = 0; i < N; i++)
			scanf("%s %d", check[i].name, &check[i].alc);
		qsort(check, N, sizeof(board), compare);
		printf("%s\n", check[0].name);
	}
	return 0;
}
