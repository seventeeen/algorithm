/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10874
 *
 */

#include<stdio.h>

int main() {
	int N, i, j, x, cnt;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		cnt = 0;
		for (j = 0; j < 10; j++) {
			scanf("%d", &x);
			if ((j % 5) + 1 == x)
				cnt++;
		}
		if (cnt == 10)
			printf("%d\n", i);
	}
	return 0;
}
