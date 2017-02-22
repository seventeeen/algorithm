/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/9498
 *
 */

#include <stdio.h>
 
 
int main(void){
	int score;
	scanf("%d", &score);
	if(score<60)
		printf("F");
	else if(score<70)
		printf("D");
	else if(score<80)
		printf("C");
	else if(score<90)
		printf("B");
	else
		printf("A");

    return 0;
     
    }
