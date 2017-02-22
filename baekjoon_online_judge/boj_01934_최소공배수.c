/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1934
 *
 */

#include<stdio.h>
#define SMALL(a, b) a<b ? a : b
int main() {
	int x, y, gcd, T, s;
	for (scanf("%d", &T); T--;) {
		scanf("%d %d", &x, &y);
		s = SMALL(x, y);
		while (1) {
			if (x%s == 0 && y%s == 0) {
				gcd = s;
				break;
			}
			s--;
		}
		printf("%d\n", (x*y)/gcd);

	}

	return 0;
}
