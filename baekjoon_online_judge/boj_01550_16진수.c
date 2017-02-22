/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1550
 *
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(void) {
	char str[64];
	int len, i;
	long long int sum=0;
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (isalpha(str[i]))
			sum += (str[i] - 55)*(long long int)pow(16, (len - 1 - i));
		else
			sum += (str[i] - '0')*(long long int)pow(16, (len - 1 - i));
	}
	printf("%lld", sum);

	return 0;
}
