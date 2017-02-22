/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-17
 * URL   : https://www.acmicpc.net/problem/1003
 *
 */

#include<stdio.h>


int main(void){
	int zero[50], one[50];
	int t;
	int n;
	zero[0]=1;
	zero[1]=0;
	one[0]=0;
	one[1]=1;
	for(t=2; t<50; t++){
		zero[t] = zero[t-1]+zero[t-2];
		one[t] = one[t-1]+one[t-2];
	}
	for(scanf("%d", &t); t--;){
		scanf("%d", &n);
		printf("%d %d\n", zero[n], one[n]);
	}
	return 0;
}
