/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2588
 *
 */

#include<stdio.h>

int main() {
	int N, x, y, z;
	char str[4];
	scanf("%d %s", &N, str);
	x = N*(str[2] - '0');
	y = N*(str[1] - '0');
	z = N*(str[0] - '0');
	printf("%d\n%d\n%d\n%d", x, y, z, x + y*10 + z*100);

	return 0;
}
