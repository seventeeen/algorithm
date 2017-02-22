/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11365
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString(char* s);

char s[100000];
int main(void) {
	while (1) {
		gets(s);
		if ((s[0] == 'E' && s[1] == 'N') & (s[2] == 'D' && s[3] == '\0'))
			break;
		reverseString(s);
		printf("%s\n", s);
	}



	return 0;
}




void reverseString(char* s) {
	size_t size = strlen(s);
	char temp;

	for (size_t i = 0; i < size / 2; i++) {
		temp = s[i];
		s[i] = s[(size - 1) - i];
		s[(size - 1) - i] = temp;
	}
}
