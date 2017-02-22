/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-22
 * URL   : https://www.acmicpc.net/problem/10800
 *
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int num, color, size, result;
}board;
board arr[200001] = { 0, };
int compare_size( const void* fst, const void* snd ){
	int com1, com2;
	com1 = ((board*)fst)->size;
	com2 = ((board*)snd)->size;
	return com1 - com2;
}
int compare_color(const void* fst, const void* snd) {
	int co1, co2, si1, si2;
	co1 = ((board*)fst)->color;
	co2 = ((board*)snd)->color;
	si1 = ((board*)fst)->size;
	si2 = ((board*)snd)->size;
	if (co1 != co2) return co1 - co2;
	else return si1 - si2;
}
int compare_num(const void* fst, const void* snd) {
	int num1, num2;
	num1 = ((board*)fst)->num;
	num2 = ((board*)snd)->num;
	return num1 - num2;
}
int main(void) {
	int N, i, temp=0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d %d", &arr[i].color, &arr[i].size);
		arr[i].num = i;
	}
	qsort(arr + 1, N, sizeof(board), compare_size);
	for (i = 1; i <= N; i++) {
		if (arr[i].size == arr[i - 1].size)
			arr[i].result = arr[i - 1].result;
		else
			arr[i].result = temp;
		temp += arr[i].size;
	}
	qsort(arr + 1, N, sizeof(board), compare_color);
	for (i = 1; i <= N; i++) {
		if (arr[i].color != arr[i - 1].color) {
			temp = arr[i].size;
			continue;
		}
		if (arr[i].size == arr[i - 1].size)
			arr[i].result = arr[i - 1].result;
		else
			arr[i].result -= temp;
		temp += arr[i].size;
	}
	qsort(arr + 1, N, sizeof(board), compare_num);
	for (i = 1; i <= N; i++)
		printf("%d\n", arr[i].result);
	return 0;
}
