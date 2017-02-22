/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10984
 *
 */

#include<stdio.h>
int main(void) {
	int T, i, sub;
	float num, score, x, y;
	for (scanf("%d", &T); T--;) {
		num = 0;
		score = 0;
		scanf("%d", &sub);
		for (i = 0; i < sub; i++) {
			scanf("%f %f", &x, &y);
			score += x*y;
			num += x;
		}
		printf("%.0f %.1f\n", num, score / num);
	}
	return 0;
}
