/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5533
 *
 */

#include<stdio.h>

int main(void) {
	int result[201] = { 0, }, fst[101] = { 0, }, snd[101] = { 0, }, trd[101] = { 0, };
	int i, N, x, y, z;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d %d %d", &x, &y, &z);
		if (fst[x] != 0) fst[x] = -1;
		else fst[x] = i;
		if (snd[y] != 0) snd[y] = -1;
		else snd[y] = i;
		if (trd[z] != 0) trd[z] = -1;
		else trd[z] = i;
	}
	for (i = 1; i <= 100; i++) {
		if (fst[i] > 0) result[fst[i]] += i;
		if (snd[i] > 0) result[snd[i]] += i;
		if (trd[i] > 0) result[trd[i]] += i;
	}
	for(i=1; i<=N; i++)
		printf("%d\n", result[i]);
	return 0;
}
