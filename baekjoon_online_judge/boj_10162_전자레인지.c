/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10162
 *
 */

#include<stdio.h>

int main() {
	int T, A = 0, B = 0, C = 0;
	scanf("%d", &T);
	while (T){
		if (T >= 300) {
			T -= 300;
			A++;
		}
		else if (T >= 60) {
			T -= 60;
			B++;
		}
		else if (T >= 10) {
			T -= 10;
			C++;
		}
		else {
			printf("-1");
			return 0;
		}
	}
	printf("%d %d %d", A, B, C);
	return 0;
}
