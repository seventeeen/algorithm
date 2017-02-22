/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2684
 *
 */

#include<stdio.h>
#include<string.h>
int main(void){
	int i, len, T, arr[8];
	char str[50];
	for (scanf("%d", &T); T--;) {
		scanf("%s", str);
		len = strlen(str);
		memset(arr, 0, sizeof(int) * 8);
		for (i = 0; i < len - 2; i++) {
			if (str[i] == 'T') {
				if (str[i + 1] == 'T') {
					if (str[i + 2] == 'T')
						arr[0]++;
					else
						arr[1]++;
				}
				else {
					if (str[i + 2] == 'T')
						arr[2]++;
					else
						arr[3]++;
				}
			}
			else {
				if (str[i + 1] == 'T') {
					if (str[i + 2] == 'T')
						arr[4]++;
					else
						arr[5]++;
				}
				else {
					if (str[i + 2] == 'T')
						arr[6]++;
					else
						arr[7]++;
				}
			}
		}
		for (i = 0; i < 8; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
