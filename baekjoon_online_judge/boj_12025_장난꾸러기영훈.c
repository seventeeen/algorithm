/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/12025
 *
 */

#include<stdio.h>
#include<string.h>
#include<math.h>
void reverse(char *str, int len) {
	int i;
	char temp;
	for (i = 0; i < (len >> 1); i++) {
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}
int main(void){
	int i, m = 0, len, cnt = 0, arr[64] = { 0, }, check[64] = { 0, };
	long long int k;
	char num[64] = { 0, };
	scanf("%s %lld", num, &k);
	len = strlen(num);
	reverse(num, len);
	for (i = 0; i < len; i++) {
		if (num[i] == '1' || num[i] == '6') {
			arr[m] = 16;
			check[m++] = i;
		}
		else if (num[i] == '2' || num[i] == '7') {
			arr[m] = 27;
			check[m++] = i;
		}
	}
	if (pow(2, m) < k) {
		printf("-1");
		return 0;
	}
	k--;
	for (i = 0; i < m; i++) {
		if (((k / (long long int)pow(2, i)) & 1) == 0) {
			if (arr[i] == 16)
				num[check[i]] = '1';
			else
				num[check[i]] = '2';
		}
		else {
			if (arr[i] == 16)
				num[check[i]] = '6';
			else
				num[check[i]] = '7';
		}
	}
	reverse(num, len);
	printf("%s", num);
	return 0;
}
