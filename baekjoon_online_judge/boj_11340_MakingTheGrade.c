/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11340
 *
 */

#include<stdio.h>

int main() {
	int T, x, y, z, sum;
	for (scanf("%d", &T); T--;) {
		scanf("%d %d %d", &x, &y, &z);
		sum = x * 15 + y * 20 + z * 25;
		sum = 9000 - sum;
		sum = sum / 40 + (sum % 40 == 0 ? 0 : 1);
		if (sum < 0) printf("0\n");
		else if (sum <= 100) printf("%d\n", sum);
		else printf("impossible\n");
	}
	return 0;
}
