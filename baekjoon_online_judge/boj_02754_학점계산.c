/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/2754
 *
 */

#include<stdio.h>

int main(void){
	char score[3];
	float front, back=0;
	scanf("%s", score);
	front = (float)(4 - ((score[0]!='F' ? score[0] : score[0]-1) - 'A'));
	if (score[1] == '+')
		back = 0.3;
	else if (score[1] == '-')
		back = -0.3;
	printf("%.1f", front + back);
	return 0;
}
