/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10757
 *
 */

#include<stdio.h>
int main(void) {
	int long_len, i=0, len;
	char temp, cnt = 0, A[10010] = { 0, }, B[10010] = { 0, };
	scanf("%s %s", A, B);
	len = -1;
	while (A[++len]);
	for (i = 0; i < len / 2; i++) {
		temp = A[i];
		A[i] = A[len - 1 - i];
		A[len - 1 - i] = temp;
	}
	len = -1;
	while (B[++len]);
	for (i = 0; i < len / 2; i++) {
		temp = B[i];
		B[i] = B[len - 1 - i];
		B[len - 1 - i] = temp;
	}

	len = -1;
	while (A[++len]);
	long_len = -1;
	while (B[++long_len]);
	long_len = len > long_len ? len : long_len;
	for (i = 0; i < long_len; i++) {
		temp = ((A[i] % '0') + (B[i] % '0')) + cnt;
		if (temp > 9)
			cnt = 1;
		else
			cnt = 0;
		B[i] = (temp % 10) + '0';

	}
	if (cnt == 0)
		B[i] = 0;
	else
		B[i] = '1';
	len = -1;
	while (B[++len]);
	for (i = 0; i < len / 2; i++) {
		temp = B[i];
		B[i] = B[len - 1 - i];
		B[len - 1 - i] = temp;
	}
	printf("%s", B);
	return 0;
}
