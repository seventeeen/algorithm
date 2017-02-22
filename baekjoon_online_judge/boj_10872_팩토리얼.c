/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10872
 *
 */

#include <stdio.h>

int main() {
	int N, i, result=1;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
		result *= i;

	printf("%d", result);

	return 0;
}
