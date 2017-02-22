/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-21
 * URL   : https://www.acmicpc.net/problem/8393
 *
 */

#include <stdio.h>
 
int main(void){
    int n, i, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		sum+=i;
	printf("%d", sum);
    return 0;
}
