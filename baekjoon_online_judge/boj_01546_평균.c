/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1546
 *
 */

#include<stdio.h>

int main(void) {
	int i;
	double N, arr[1000] = { 0, }, max = 0.0, sum = 0.0;
	scanf("%lf", &N);
	for (i = 0; i < N; i++) {
		scanf("%lf", &arr[i]);
		if (max < arr[i])
			max = arr[i];
	}
	for (i = 0; i < N; i++) {
		sum += (arr[i] / max) * 100.0;
	}
	sum /= N;
	printf("%.2lf", sum);


	return 0;
}
