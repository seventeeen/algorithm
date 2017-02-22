/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/5586
 *
 */

#include<stdio.h>

int main(void) {
	char str[10001] = { 0, };
	int x, i=0, cnt_I=0, cnt_J=0;
	scanf("%s", str);
	while (str[i + 2]) {
		if ((str[i] == 'I' && str[i + 1] == 'O')&str[i + 2] == 'I')
			cnt_I++;
		else if ((str[i] == 'J' && str[i + 1] == 'O')&str[i + 2] == 'I')
			cnt_J++;
		i++;
	}
	printf("%d\n%d", cnt_J, cnt_I);
	return 0;
}
