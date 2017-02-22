/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5575
 *
 */

#include<stdio.h>

#define SIX 60
int main(void) {
	int h, m, s, hh, mm, ss, i, start, end, result;
	for (i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &h, &m, &s, &hh, &mm, &ss);
		start = h*SIX*SIX + m*SIX + s;
		end = hh*SIX*SIX + mm*SIX + ss;
		result = end - start;
		printf("%d %d %d\n", result / (SIX*SIX), (result / SIX) % SIX, result%SIX);
	}
	return 0;
}
