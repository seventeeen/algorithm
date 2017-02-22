/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/11931
 *
 */

#include<stdio.h>

int arr[1000000] = { 0, };

int compare(const void *arg1, const void *arg2)
{
	if (*(int*)arg1 < *(int*)arg2) return 1;
	else if (*(int*)arg1 == *(int*)arg2) return 0;
	else return -1;
}
int main(){
	int N, i;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	qsort(arr, N, sizeof(int), compare);

	for (i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return 0;
}
