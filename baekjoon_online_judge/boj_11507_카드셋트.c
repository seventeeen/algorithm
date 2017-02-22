/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11507
 *
 */

#include<stdio.h>
#include<string.h>
int main(void){
	char str[1010], temp[4];
	int i, j, cnt, len, arr[4][14] = { 0, }, result[4] = { 0, };
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		temp[i % 3] = str[i];
		if (i % 3 == 2) {
			switch (temp[0]) {
			case 'P':
				arr[0][((temp[1] - '0') * 10) + (temp[2] - '0')]++;
				break;
			case 'K':
				arr[1][((temp[1] - '0') * 10) + (temp[2] - '0')]++;
				break;
			case 'H':
				arr[2][((temp[1] - '0') * 10) + (temp[2] - '0')]++;
				break;
			case 'T':
				arr[3][((temp[1] - '0') * 10) + (temp[2] - '0')]++;
				break;
			default:
				printf("error\n");
			}
		}
	}
	for (i = 0; i < 4; i++) {
		cnt = 0;
		for (j = 1; j <= 13; j++) {
			if (arr[i][j] > 1) {
				printf("GRESKA");
				return 0;
			}
			else if (arr[i][j] == 1)
				cnt++;
		}
		result[i] = 13 - cnt;
	}
	printf("%d %d %d %d", result[0], result[1], result[2], result[3]);
	return 0;
}
