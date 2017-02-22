/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1292
 *
 */

#include <stdio.h>
int main() {
	int A, B;
	int i, j=1, k=0, sum=0, arr[1000] = { 0, };
	scanf("%d %d", &A, &B);

	for (i = 0; i < B; i++) {
		arr[i] = j;
		k++;
		if (k == j) {
			j++;
			k = 0;
		}
	}

	for (i = A - 1; i < B; i++)
		sum += arr[i];
	printf("%d", sum);
	return 0;
}
