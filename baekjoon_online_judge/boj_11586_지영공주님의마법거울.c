/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11586
 *
 */

#include<stdio.h>
#include<string.h>
void reverse(char* s) {
	int i, len;
	char temp;
	len = strlen(s);
	for (i = 0; i < (len>>1); i++) {
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
int main(void) {
	int i, n, judge;
	char **a;
	scanf("%d", &n);
	a = (char**)calloc(n, sizeof(char*));
	for (i = 0; i < n; i++)
		a[i] = (char*)calloc(n + 1, sizeof(char));
	for (i = 0; i < n; i++)
		scanf("%s", a[i]);
	scanf("%d", &judge);
	switch (judge) {
	case 1:
		for (i = 0; i < n; i++)
			printf("%s\n", a[i]);
		break;
	case 2:
		for (i = 0; i < n; i++) {
			reverse(a[i]);
			printf("%s\n", a[i]);
		}
		break;
	case 3:
		for (i = n-1; i >= 0; i--)
			printf("%s\n", a[i]);
		break;
	default:
		return 0;
	}
	return 0;
}
