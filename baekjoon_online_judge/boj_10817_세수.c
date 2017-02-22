/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10817
 *
 */

#include <stdio.h>
 
 
int main(void){
	int arr[3];
	int i;
	int temp;
	for(i=0; i<3; i++)
		scanf("%d", &arr[i]);
	for(i=0; i<2; i++){
		if(arr[i]>arr[i+1]){
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	if(arr[0]>arr[1]){
			temp=arr[0];
			arr[0]=arr[1];
			arr[1]=temp;
	}
	printf("%d", arr[1]);
	return 0;
     
    }
