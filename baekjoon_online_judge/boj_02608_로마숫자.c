/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2608
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int trans(char x) {
	switch (x) {
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	default: return -1;
	}
}
void rome(int x) {
	char roma[2001];
	int i=0;
	while (x != 0) {
		if (x >= 1000) { x -= 1000; roma[i] = 'M'; i++; }
		else if (x >= 900) { x -= 900; roma[i] = 'C'; roma[i + 1] = 'M'; i += 2; }
		else if (x >= 500) { x -= 500; roma[i] = 'D'; i++; }
		else if (x >= 400) { x -= 400; roma[i] = 'C'; roma[i + 1] = 'D'; i += 2; }
		else if (x >= 100) { x -= 100; roma[i] = 'C'; i++; }
		else if (x >= 90) { x -= 90; roma[i] = 'X'; roma[i + 1] = 'C'; i += 2; }
		else if (x >= 50) { x -= 50; roma[i] = 'L'; i++; }
		else if (x >= 40) { x -= 40; roma[i] = 'X'; roma[i + 1] = 'L'; i += 2; }
		else if (x >= 10) { x -= 10; roma[i] = 'X'; i++; }
		else if (x >= 9) { x -= 9; roma[i] = 'I'; roma[i + 1] = 'X'; i += 2; }
		else if (x >= 5) { x -= 5; roma[i] = 'V'; i++; }
		else if (x >= 4) { x -= 4; roma[i] = 'I'; roma[i + 1] = 'V'; i += 2; }
		else { x -= 1; roma[i] = 'I'; i++; }
	}
	roma[i] = '\0';
	printf("%s", roma);
}

int main() {
	int i, x=0, y=0;
	char str1[2001], str2[2001];
	scanf("%s %s", str1, str2);
	for (i = 0; i < strlen(str1); i++) {
		if (trans(str1[i]) < trans(str1[i + 1]) && str1[i + 1] != '\0') {
			x += trans(str1[i + 1]) - trans(str1[i]);
			i++;
		}
		else
			x += trans(str1[i]);
	}
	for (i = 0; i < strlen(str2); i++) {
		if (trans(str2[i]) < trans(str2[i + 1]) && str2[i + 1] != '\0') {
			x += trans(str2[i + 1]) - trans(str2[i]);
			i++;
		}
		else
			x += trans(str2[i]);
	}
	printf("%d\n", x);
	rome(x);
	return 0;
}
