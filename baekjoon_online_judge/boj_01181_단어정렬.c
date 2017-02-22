/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1181
 *
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct mystring{
	char str[51];
};

struct mystring arr[20001], result[20001];

int compare(const void *arg1, const void *arg2)
{
	if (strlen((char*)arg1) > strlen((char*)arg2)) return 1;
	else if (strlen((char*)arg1) < strlen((char*)arg2)) return -1;
	else
		return strcmp((char*)arg1, (char*)arg2);
}
int main(){
	int i, j, k, N, cnt = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) 
		scanf("%s", arr[i].str);

	qsort(arr, N, sizeof(struct mystring), compare);
	
	result[0] = arr[0];
	i = 0; j = 1;
	for (k = 0; k < N; k++) {
		if (strcmp(result[i].str, arr[j].str)==0)
			cnt++;
		else
			result[++i] = arr[j];
		j++;
	}

	for (j = 0; j < N-cnt; j++)
		printf("%s\n", result[j].str);
	return 0;
}
