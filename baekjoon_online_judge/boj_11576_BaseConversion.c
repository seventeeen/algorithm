/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11576
 *
 */

#include<stdio.h>
#include<math.h>

int main(void) {
	int A, B, N, ten_type=0, arr[30], B_type[30];
	int i;
	scanf("%d %d %d", &A, &B, &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		ten_type += (int)pow(A, N - 1 - i)*arr[i];
	}
	i = 0;
	while (1) {
		if (ten_type == 0)
			break;
		B_type[i] = ten_type%B;
		ten_type -= ten_type%B;
		ten_type /= B;
		i++;
	}
	while ((--i)+1)
		printf("%d ", B_type[i]);
	
	return 0;
}
