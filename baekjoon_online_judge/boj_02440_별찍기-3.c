/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2440
 *
 */

#include <stdio.h>
 
int main(void){
    int N, i, j;
    scanf("%d", &N);
    for(i=0; i<N; i++){
		for(j=0; j<N-i; j++)
			printf("*");
		printf("\n");
	}
    return 0;
}
