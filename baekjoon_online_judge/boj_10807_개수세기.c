/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10807
 *
 */

#include<stdio.h>

int main(void) {
	int N, arr[100] = { 0, }, i, v, cnt=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &v);
	for (i = 0; i < N; i++) {
		if (arr[i] == v)
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}
