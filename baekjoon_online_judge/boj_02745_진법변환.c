/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2745
 *
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(void) {
	char str[64];
	int sum = 0, len, i, B;
	scanf("%s %d", str, &B);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (isalpha(str[i]))
			sum += (str[i] - 55)*(int)pow(B, (len - 1 - i));
		else
			sum += (str[i] - '0')*(int)pow(B, (len - 1 - i));
	}
	printf("%d", sum);

	return 0;
}
