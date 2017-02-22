/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10871
 *
 */

#include <stdio.h>


int main(void){
	int X, N, i;
	int arr[10000]={0,};
	scanf("%d %d", &N, &X);

	for(i=0; i<N; i++)
		scanf("%d", &arr[i]);

	for(i=0; i<N; i++){
		if(arr[i]<X)
			printf("%d ", arr[i]);
	}
	return 0;
     
    }
