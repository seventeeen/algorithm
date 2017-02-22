/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11651
 *
 */

#include<stdio.h>
#include<stdlib.h>

struct array{
	int xnum;
	int ynum;
};
int compare(const void *a, const void *b) {
	int val1, val2, sec1, sec2;
	val1 = ((struct array*)a)->ynum;
	val2 = ((struct array*)b)->ynum;
	sec1 = ((struct array*)a)->xnum;
	sec2 = ((struct array*)b)->xnum;
	if (val1 > val2) return 1;
	else if (val1 < val2) return -1;
	else {
		if (sec1 > sec2) return 1;
		else if (sec1 < sec2) return -1;
		else return 0;
	}
}
int main() {
	int i, N;
	struct array arr[100000];
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d %d", &arr[i].xnum, &arr[i].ynum);

	qsort(arr, N, sizeof(struct array), compare);

	for (i = 0; i < N; i++)
		printf("%d %d\n", arr[i].xnum, arr[i].ynum);
	return 0;
}
