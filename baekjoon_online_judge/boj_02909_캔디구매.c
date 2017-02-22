/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2909
 *
 */

#include<stdio.h>
#include<math.h>
int main() {
	int C, K, m, d, p, n=0;
	scanf("%d %d", &C, &K);
	p = (int)pow(10.0, (double)K);
	m = C%p;
	d = C / p;
	if (m >= (p >> 1))
		n++;
	printf("%d", (d + n)*p);
	return 0;
}
