/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10867
 *
 */

#include<stdio.h>
#include<math.h>

int A[2002] = { 0, };
int main(){
	int N, x, i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &x);
		if (x < 0) {
			A[abs(x) + 1000]++;
		}
		else
			A[x]++;
	}
	for (i = 2000; i > 1000; i--)
		if (A[i] != 0)
			printf("%d ", (i - 1000)*-1);
	for (i = 0; i <= 1000; i++) {
		if (A[i] != 0)
			printf("%d ", i);
	}
	return 0;
}
