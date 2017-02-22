/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10865
 *
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int one, two;
}check;
check arr[1000010] = { 0, };
int result[100010] = { 0, };
int compare(const void* fst, const void* snd) {
	int one1, one2, two1, two2;
	one1 = ((check*)fst)->one;
	one2 = ((check*)snd)->one;
	two1 = ((check*)fst)->two;
	two2 = ((check*)snd)->two;
	if (one1 - one2 != 0) return one1 - one2;
	else return two1 - two2;
}
int main(void) {
	int N, M, i, k=0;
	scanf("%d %d", &N, &M);
	for (i = 0; i < M; i++)
		scanf("%d %d", &arr[i].one, &arr[i].two);
	qsort(arr, M, sizeof(check), compare);
	for (i = 1; i < M; i++) {
		if (arr[i].one == arr[k].one && arr[i].two == arr[k].two) {
			arr[i].one = 0;
			arr[i].two = 0;
		}
		else
			k = i;
	}
	for (i = 0; i < M; i++) {
		result[arr[i].one]++;
		result[arr[i].two]++;
	}
	for (i = 1; i <= N; i++)
		printf("%d\n", result[i]);
	return 0;
}
