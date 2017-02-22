/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1453
 *
 */

#include<stdio.h>

int main() {
	int N, i, x, arr[101] = { 0, }, cnt=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &x);
		if (arr[x] == 0)
			arr[x]++;
		else
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}
