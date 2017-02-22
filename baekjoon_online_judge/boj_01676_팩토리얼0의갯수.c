/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1676
 *
 */

#include <stdio.h>
#define SMALL(a, b) a<b ? a : b
int main() {
	int N;
	int arr[2] = { 0, }, i, k;

	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		k = i;
		while(k>1){
			if ((k & 1) == 0) {
				arr[0] += 1;
				k >>= 1;
			}
			else if (k % 5 == 0) {
				arr[1] += 1;
				k /= 5;
			}
			else
				break;
		}
	}
	if ((arr[0] == 0) || (arr[1] == 0))
		printf("0");
	else
		printf("%d", SMALL(arr[0], arr[1]));
	return 0;
}
