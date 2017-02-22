/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11944
 *
 */

#include<stdio.h>
#include<math.h>

int main() {
	char str[5] = { 0, };
	int N=0, M, i=0, len=0;
	scanf("%s %d", str, &M);
	while (str[i++])
		len++;
	for (i = 0; i < len; i++)
		N += (str[len-1-i] - '0')*(int)pow(10.0, i);
	if (len*N < M) {
		for (i = 0; i < N; i++)
			printf("%d", N);
	}
	else {
		for (i = 0; i < M; i++)
			printf("%c", str[i%len]);
	}
	return 0;
}
