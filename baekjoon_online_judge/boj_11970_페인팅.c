/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11970
 *
 */

#include<stdio.h>

int main(void) {
	int arr[101] = { 0, };
	int a, b, c, d, i, cnt=0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	for (i = a; i < b; i++)
		arr[i]++;
	for (i = c; i < d; i++)
		arr[i]++;
	for (i = 0; i <= 100; i++) {
		if (arr[i] != 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
