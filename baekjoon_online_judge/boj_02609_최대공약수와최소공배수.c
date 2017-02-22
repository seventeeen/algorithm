/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2609
 *
 */

#include<stdio.h>

int main(){
	int A, B, i, gcd=0, lcm=0, small, big;
	scanf("%d %d", &A, &B);

	small = A < B ? A : B;
	for (i = small; i > 0; i--) {
		if (A%i == 0 && B%i == 0) {
			gcd = i;
			break;
		}
	}
	for(i=1; ;i++){
		if ((gcd*i) % A == 0 && (gcd*i) % B == 0) {
			lcm = gcd*i;
			break;
		}
	}
	printf("%d\n%d", gcd, lcm);

	return 0;
}
