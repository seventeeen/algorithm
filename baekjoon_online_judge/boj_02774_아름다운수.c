/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2774
 *
 */

#include<stdio.h>
#include<string.h>

int main(void){
	int i, T, arr[10], len, cnt;
	char input[20];
	for (scanf("%d", &T); T--;) {
		scanf("%s", input);
		memset(arr, 0, sizeof(int)*10);
		cnt = 0;
		len = strlen(input);
		for (i = 0; i < len; i++)
			arr[input[i] - '0']=1;

		for (i = 0; i < 10; i++) {
			if (arr[i] == 1)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
