/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11687
 *
 */

#include <stdio.h>
int main() {
	int N, result = -1;
	int arr[2] = { 0, 0 }, i = 1, k;

	scanf("%d", &N);
	while (1) {
		k = i*5;
		while (k > 4) {
			if (k % 5 == 0) {
				arr[1]++;
				k /= 5;
			}
			else
				break;
		}
		if (arr[1] == N) {
			result = i*5;
			break;
		}
		else if (arr[1] > N)
			break;
		i++;
	}

	printf("%d", result);
	return 0;
}
