/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10824
 *
 */

#include<stdio.h>
#include<string.h>
#include<math.h>
void reverse(char *k, int len) {
	int i;
	char temp;
	for (i = 0; i < (len >> 1); i++) {
		temp = k[i];
		k[i] = k[len - 1 - i];
		k[len - 1 - i] = temp;
	}
}
int main(void) {
	int len, i, j;
	long long int sum=0;
	char A[20] = { 0, }, B[10] = { 0, };
	for (j = 0; j < 2; j++) {
		scanf("%s %s", A, B);
		strcat(A, B);
		len = strlen(A);
		reverse(A, len);
		for (i = 0; i < len; i++) {
			sum += (long long int)pow(10, i)*(A[i] - '0');
		}
	}
	printf("%lld", sum);
	return 0;
}
