/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/2439
 *
 */

#include <stdio.h>
 
int main(void){
    int N, i, j;
    scanf("%d", &N);
    for(i=0; i<N; i++){
		for(j=1; j<N-i; j++)
			printf(" ");
		for(j=0; j<=i; j++)
			printf("*");
		printf("\n");
	}
    return 0;
}
