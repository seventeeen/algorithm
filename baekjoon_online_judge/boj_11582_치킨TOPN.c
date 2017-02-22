/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11582
 *
 */

#include<stdio.h>
#include<stdlib.h>
int compare(const void* fst, const void* snd) {
	return *(int*)fst - *(int*)snd;
}
int main(void) {
	int i, n, k, s;
	int *base;
	scanf("%d", &n);
	base = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &base[i]);
	scanf("%d", &k);
	s = n / k;
	for (i = 0; i < k; i++)
		qsort(base+(i*s), s, sizeof(int), compare);
	for (i = 0; i < n; i++)
		printf("%d ", base[i]);
	return 0;
}
